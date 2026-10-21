//go:build !darwin && !linux && !windows

package main

import "os"

func isTerminal(fd uintptr) bool {
	st, err := os.NewFile(fd, "").Stat()
	return err == nil && st.Mode()&os.ModeCharDevice != 0
}

func writable(string) bool { return true }

func setupConsole() {}

func colourSupported() bool { return false }
