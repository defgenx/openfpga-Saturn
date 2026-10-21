//go:build darwin || linux

package main

import (
	"syscall"
	"unsafe"
)

func isTerminal(fd uintptr) bool {
	var t syscall.Termios
	_, _, e := syscall.Syscall(syscall.SYS_IOCTL, fd, ioctlGetTermios, uintptr(unsafe.Pointer(&t)))
	return e == 0
}

func writable(path string) bool { return syscall.Access(path, 2) == nil } // W_OK

func setupConsole() {}

func colourSupported() bool { return true }
