#!/bin/bash
cat /etc/passwd | grep -wv "#" | awk "NR%2 {print}" | cut -f1 -d":" | rev | sort -r| sed -n "$FT_LINE1, $FT_LINE2 p"| awk -v ORS=", " "1"| sed "s/..$/./"
