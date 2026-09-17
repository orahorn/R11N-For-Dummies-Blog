#!/bin/bash

P=${1}
[ -z "$P" ] && {
	echo "Usage: $0 <page_number_of_the_DG_blog>" 2>&1
exit 1
}
URL="https://c-for-dummies.com/blog/?p=$P"
OUT=$P.c
curl -s "$URL"|sed -n '/<pre class="screen">/,/<\/pre>/p'| \
	sed 's/<pre class="screen">//;s/&lt;/</;s/&gt;/>/;s/<\/pre>//;s/\r$//'|tee -a $OUT
cat <<EOT |tee -a $OUT

/*
	$URL
*/
EOT
echo Result in: $OUT


