if [ $# -eq 1 ]
then
	cat $1 | rev | cut -d$'\t' -f 2- | rev | grep -i "nicolas" | grep -i "bauer" | rev | cut -f1 -d$'\t' | rev | grep -v '\.'
fi
