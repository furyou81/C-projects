cat /etc/passwd | sed '/#/d' | awk 'NR % 2 ==0' | cut -d : -f 1 | rev | sort -r | awk -v ft1=$FT_LINE1 -v ft2=$FT_LINE2 'NR >= ft1 &&  NR <= ft2' | sed -n -e 'H;${x;s/\n/, /g;p;}' | colrm 1 2 | sed 's/$/./' | tr -d '\n'
