set binpath=%~1
cd /d %~dp0
python bin2gzip.py "%binpath%"