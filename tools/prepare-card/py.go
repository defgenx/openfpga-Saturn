package main

// Python-compatible string and path helpers: the report and the files must match what the Python tool
// produced (os.path, repr, json.dumps, OSError texts), so these follow CPython's rules, not Go's.

import (
	"errors"
	"fmt"
	"os"
	"path/filepath"
	"runtime"
	"strconv"
	"strings"
	"syscall"
	"unicode"
	"unicode/utf8"
)

const sep = string(os.PathSeparator)

var windows = runtime.GOOS == "windows"

func isSepByte(c byte) bool { return c == '/' || (windows && c == '\\') }

func pyIsAbs(p string) bool {
	if windows {
		return len(p) > 0 && isSepByte(p[0]) || len(p) > 2 && p[1] == ':' && isSepByte(p[2])
	}
	return strings.HasPrefix(p, "/")
}

// pyJoin is os.path.join: no cleaning, an absolute part restarts the path.
func pyJoin(a string, ps ...string) string {
	path := a
	for _, b := range ps {
		switch {
		case pyIsAbs(b):
			path = b
		case path == "" || isSepByte(path[len(path)-1]):
			path += b
		default:
			path += sep + b
		}
	}
	return path
}

func pyBasename(p string) string {
	i := len(p) - 1
	for i >= 0 && !isSepByte(p[i]) {
		i--
	}
	return p[i+1:]
}

// pySplitext is os.path.splitext (leading dots of the name are not an extension).
func pySplitext(p string) (string, string) {
	sepIdx := -1
	for i := len(p) - 1; i >= 0; i-- {
		if isSepByte(p[i]) {
			sepIdx = i
			break
		}
	}
	dot := strings.LastIndexByte(p, '.')
	if dot > sepIdx {
		for i := sepIdx + 1; i < dot; i++ {
			if p[i] != '.' {
				return p[:dot], p[dot:]
			}
		}
	}
	return p, ""
}

func pyAbs(p string) string {
	a, err := filepath.Abs(p)
	if err != nil {
		return p
	}
	return a
}

// pyRel is os.path.relpath(path, start).
func pyRel(path, start string) string {
	r, err := filepath.Rel(pyAbs(start), pyAbs(path))
	if err != nil {
		return path
	}
	return r
}

func pyNormcase(p string) string {
	if windows {
		return strings.ToLower(strings.ReplaceAll(p, "/", "\\"))
	}
	return p
}

func toSlash(p string) string { return strings.ReplaceAll(p, sep, "/") }

func isFile(p string) bool {
	st, err := os.Stat(p)
	return err == nil && st.Mode().IsRegular()
}

func isDir(p string) bool {
	st, err := os.Stat(p)
	return err == nil && st.IsDir()
}

func exists(p string) bool {
	_, err := os.Stat(p)
	return err == nil
}

// pyMtime is os.path.getmtime: a float, so two close timestamps compare as they do in Python.
func pyMtime(p string) (float64, error) {
	st, err := os.Stat(p)
	if err != nil {
		return 0, err
	}
	t := st.ModTime()
	return float64(t.Unix()) + float64(t.Nanosecond())*1e-9, nil
}

func pyIsSpace(r rune) bool { return unicode.IsSpace(r) || r >= 0x1c && r <= 0x1f }

func pyStrip(s string) string { return strings.TrimFunc(s, pyIsSpace) }

// pyUpper is str.upper for the cases a disc header or a database line can hold.
func pyUpper(s string) string {
	var b strings.Builder
	for _, r := range s {
		if r == 'ß' {
			b.WriteString("SS")
		} else {
			b.WriteRune(unicode.ToUpper(r))
		}
	}
	return b.String()
}

func latin1(b []byte) string {
	rs := make([]rune, len(b))
	for i, c := range b {
		rs[i] = rune(c)
	}
	return string(rs)
}

func runeLen(s string) int { return utf8.RuneCountInString(s) }

// pyRepr is repr() of a str.
func pyRepr(s string) string {
	q := byte('\'')
	if strings.Contains(s, "'") && !strings.Contains(s, "\"") {
		q = '"'
	}
	var b strings.Builder
	b.WriteByte(q)
	for _, r := range s {
		switch {
		case r == '\\':
			b.WriteString(`\\`)
		case r == rune(q):
			b.WriteByte('\\')
			b.WriteByte(q)
		case r == '\t':
			b.WriteString(`\t`)
		case r == '\n':
			b.WriteString(`\n`)
		case r == '\r':
			b.WriteString(`\r`)
		case r == utf8.RuneError || !unicode.IsPrint(r):
			if r < 0x100 {
				fmt.Fprintf(&b, `\x%02x`, r)
			} else if r < 0x10000 {
				fmt.Fprintf(&b, `\u%04x`, r)
			} else {
				fmt.Fprintf(&b, `\U%08x`, r)
			}
		default:
			b.WriteRune(r)
		}
	}
	b.WriteByte(q)
	return b.String()
}

// jsonStr is a string as json.dumps writes it (ensure_ascii).
func jsonStr(s string) string {
	var b strings.Builder
	b.WriteByte('"')
	for _, r := range s {
		switch r {
		case '"':
			b.WriteString(`\"`)
		case '\\':
			b.WriteString(`\\`)
		case '\n':
			b.WriteString(`\n`)
		case '\r':
			b.WriteString(`\r`)
		case '\t':
			b.WriteString(`\t`)
		case '\b':
			b.WriteString(`\b`)
		case '\f':
			b.WriteString(`\f`)
		default:
			switch {
			case r >= 0x20 && r <= 0x7e:
				b.WriteRune(r)
			case r < 0x10000:
				fmt.Fprintf(&b, `\u%04x`, r)
			default:
				r -= 0x10000
				fmt.Fprintf(&b, `\u%04x\u%04x`, 0xd800+(r>>10), 0xdc00+(r&0x3ff))
			}
		}
	}
	b.WriteByte('"')
	return b.String()
}

// osError renders err as str(OSError) does: "[Errno 2] No such file or directory: 'path'".
func osError(err error, names ...string) string {
	var en syscall.Errno
	msg := err.Error()
	code := ""
	if errors.As(err, &en) {
		msg = en.Error()
		if windows {
			code = "[WinError " + strconv.Itoa(int(en)) + "] "
			msg = strings.TrimRight(msg, ". \r\n")
		} else {
			code = "[Errno " + strconv.Itoa(int(en)) + "] "
		}
		if msg != "" {
			msg = strings.ToUpper(msg[:1]) + msg[1:]
		}
	}
	s := code + msg
	if len(names) > 0 {
		s += ": " + pyRepr(names[0])
	}
	if len(names) > 1 {
		s += " -> " + pyRepr(names[1])
	}
	return s
}
