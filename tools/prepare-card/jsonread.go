package main

// A JSON reader that keeps object key order and follows Python's json.loads (duplicate keys: the last value
// at the first key's position), so a JSON carried over is written back in its own key order.

import (
	"errors"
	"strconv"
	"strings"
	"unicode/utf16"
	"unicode/utf8"
)

type jobj struct {
	keys []string
	vals map[string]any
}

type jnum struct {
	raw   string
	isInt bool
}

type jparser struct {
	s string
	i int
}

var errJSON = errors.New("invalid JSON")

func parseJSON(s string) (any, error) {
	p := &jparser{s: s}
	p.ws()
	v, err := p.value()
	if err != nil {
		return nil, err
	}
	p.ws()
	if p.i != len(p.s) {
		return nil, errJSON
	}
	return v, nil
}

func (p *jparser) ws() {
	for p.i < len(p.s) && strings.IndexByte(" \t\n\r", p.s[p.i]) >= 0 {
		p.i++
	}
}

func (p *jparser) value() (any, error) {
	if p.i >= len(p.s) {
		return nil, errJSON
	}
	switch c := p.s[p.i]; {
	case c == '{':
		p.i++
		o := &jobj{vals: map[string]any{}}
		p.ws()
		if p.i < len(p.s) && p.s[p.i] == '}' {
			p.i++
			return o, nil
		}
		for {
			p.ws()
			if p.i >= len(p.s) || p.s[p.i] != '"' {
				return nil, errJSON
			}
			k, err := p.str()
			if err != nil {
				return nil, err
			}
			p.ws()
			if p.i >= len(p.s) || p.s[p.i] != ':' {
				return nil, errJSON
			}
			p.i++
			p.ws()
			v, err := p.value()
			if err != nil {
				return nil, err
			}
			if _, dup := o.vals[k]; !dup {
				o.keys = append(o.keys, k)
			}
			o.vals[k] = v
			p.ws()
			if p.i < len(p.s) && p.s[p.i] == ',' {
				p.i++
				continue
			}
			if p.i < len(p.s) && p.s[p.i] == '}' {
				p.i++
				return o, nil
			}
			return nil, errJSON
		}
	case c == '[':
		p.i++
		var a []any
		p.ws()
		if p.i < len(p.s) && p.s[p.i] == ']' {
			p.i++
			return a, nil
		}
		for {
			p.ws()
			v, err := p.value()
			if err != nil {
				return nil, err
			}
			a = append(a, v)
			p.ws()
			if p.i < len(p.s) && p.s[p.i] == ',' {
				p.i++
				continue
			}
			if p.i < len(p.s) && p.s[p.i] == ']' {
				p.i++
				return a, nil
			}
			return nil, errJSON
		}
	case c == '"':
		return p.str()
	case strings.HasPrefix(p.s[p.i:], "true"):
		p.i += 4
		return true, nil
	case strings.HasPrefix(p.s[p.i:], "false"):
		p.i += 5
		return false, nil
	case strings.HasPrefix(p.s[p.i:], "null"):
		p.i += 4
		return nil, nil
	case strings.HasPrefix(p.s[p.i:], "NaN"):
		p.i += 3
		return jnum{"NaN", false}, nil
	case strings.HasPrefix(p.s[p.i:], "Infinity"):
		p.i += 8
		return jnum{"Infinity", false}, nil
	case strings.HasPrefix(p.s[p.i:], "-Infinity"):
		p.i += 9
		return jnum{"-Infinity", false}, nil
	case c == '-' || c >= '0' && c <= '9':
		return p.num()
	}
	return nil, errJSON
}

func (p *jparser) num() (any, error) {
	st := p.i
	if p.s[p.i] == '-' {
		p.i++
	}
	if p.i >= len(p.s) {
		return nil, errJSON
	}
	if p.s[p.i] == '0' {
		p.i++
	} else if p.s[p.i] >= '1' && p.s[p.i] <= '9' {
		for p.i < len(p.s) && isDigit(p.s[p.i]) {
			p.i++
		}
	} else {
		return nil, errJSON
	}
	isInt := true
	if p.i+1 < len(p.s) && p.s[p.i] == '.' && isDigit(p.s[p.i+1]) {
		isInt = false
		p.i++
		for p.i < len(p.s) && isDigit(p.s[p.i]) {
			p.i++
		}
	}
	if p.i < len(p.s) && (p.s[p.i] == 'e' || p.s[p.i] == 'E') {
		j := p.i + 1
		if j < len(p.s) && (p.s[j] == '+' || p.s[j] == '-') {
			j++
		}
		if j < len(p.s) && isDigit(p.s[j]) {
			isInt = false
			for j < len(p.s) && isDigit(p.s[j]) {
				j++
			}
			p.i = j
		}
	}
	return jnum{p.s[st:p.i], isInt}, nil
}

func (p *jparser) str() (string, error) {
	p.i++ // opening quote
	var b strings.Builder
	for {
		if p.i >= len(p.s) {
			return "", errJSON
		}
		c := p.s[p.i]
		switch {
		case c == '"':
			p.i++
			return b.String(), nil
		case c < 0x20:
			return "", errJSON
		case c == '\\':
			if p.i+1 >= len(p.s) {
				return "", errJSON
			}
			e := p.s[p.i+1]
			p.i += 2
			switch e {
			case '"', '\\', '/':
				b.WriteByte(e)
			case 'b':
				b.WriteByte('\b')
			case 'f':
				b.WriteByte('\f')
			case 'n':
				b.WriteByte('\n')
			case 'r':
				b.WriteByte('\r')
			case 't':
				b.WriteByte('\t')
			case 'u':
				r, ok := p.hex4()
				if !ok {
					return "", errJSON
				}
				if utf16.IsSurrogate(r) && r < 0xdc00 && strings.HasPrefix(p.s[p.i:], `\u`) {
					save := p.i
					p.i += 2
					if r2, ok := p.hex4(); ok && r2 >= 0xdc00 && r2 <= 0xdfff {
						r = utf16.DecodeRune(r, r2)
					} else {
						p.i = save
					}
				}
				b.WriteRune(r)
			default:
				return "", errJSON
			}
		default:
			r, size := utf8.DecodeRuneInString(p.s[p.i:])
			b.WriteRune(r)
			p.i += size
		}
	}
}

func (p *jparser) hex4() (rune, bool) {
	if p.i+4 > len(p.s) {
		return 0, false
	}
	v, err := strconv.ParseUint(p.s[p.i:p.i+4], 16, 32)
	if err != nil || strings.ContainsAny(p.s[p.i:p.i+4], "+-") {
		return 0, false
	}
	p.i += 4
	return rune(v), true
}
