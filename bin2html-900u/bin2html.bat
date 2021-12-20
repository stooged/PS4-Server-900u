set binpath=%~1
cd /d %~dp0
python bin2html.py "%binpath%"
