package main

import (
	"os"
	"syscall"
)

var (
	kernel32       = syscall.NewLazyDLL("kernel32.dll")
	setConsoleCP   = kernel32.NewProc("SetConsoleOutputCP")
	setConsoleMode = kernel32.NewProc("SetConsoleMode")
	vtOK           bool
)

func isTerminal(fd uintptr) bool {
	var mode uint32
	return syscall.GetConsoleMode(syscall.Handle(fd), &mode) == nil
}

func writable(path string) bool {
	st, err := os.Stat(path)
	return err == nil && st.Mode().Perm()&0o200 != 0
}

// setupConsole switches the console to UTF-8 and turns on ANSI colours where the console has them.
func setupConsole() {
	setConsoleCP.Call(65001)
	h := syscall.Handle(os.Stdout.Fd())
	var mode uint32
	if syscall.GetConsoleMode(h, &mode) == nil {
		const enableVT = 0x0004 // ENABLE_VIRTUAL_TERMINAL_PROCESSING
		r, _, _ := setConsoleMode.Call(uintptr(h), uintptr(mode|enableVT))
		vtOK = r != 0
	}
}

func colourSupported() bool { return vtOK }
