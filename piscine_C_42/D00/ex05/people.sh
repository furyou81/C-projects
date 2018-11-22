ldapsearch -LLL "(uid=z*)" | grep "cn:" | sed 's/cn: //' | sort -ri
