@echo off
rem Double-click to install the Sega Saturn core onto the Pocket SD card (runs install.ps1).
rem Arguments are passed through, e.g.  install.bat -SD E:\   or   install.bat -DryRun
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0install.ps1" %*
echo.
pause
