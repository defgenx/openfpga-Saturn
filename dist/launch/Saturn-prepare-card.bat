@echo off
rem Double-click on Windows: prepares the Saturn discs on the SD card this file is on.
cd /d "%~dp0"
where py >nul 2>nul && (py -3 Saturn-mktoc.py) || (where python >nul 2>nul && (python Saturn-mktoc.py) || echo Python 3 is needed: https://www.python.org/downloads/)
echo.
pause
