cat /etc/passwd | grep -v "^#" | sed -n 'n;p' | cut -d':' -f1 | rev | sort -r | head -"$FT_LINE2" | tail -"$(( $FT_LINE2 - $FT_LINE1 + 1 ))" | sed 's/%/%p/g;s/@/%a/g' | tr '\n' @ | sed 's/@/, /g;s/%a/@/g;s/%p/%/g' | rev | cut -d',' -f2- | rev | sed 's/$/./' | tr -d '\n'