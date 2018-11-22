ldapsearch -LLL -Q "(sn=*bon*)" | grep "sn: " | wc -l | colrm 1 6
