#!/bin/bash

P=${1}
[ -z "$P" ] && {
	echo "Usage: $0 <page_number_of_the_DG_blog>" 2>&1
exit 1
}
URL="https://c-for-dummies.com/blog/?p=$P"
OUT=$P.c
curl -s "$URL"|sed -n '/^#include/,/^\}/p'| \
	sed 's/&lt;/</;s/&gt;/>/;s/<\/pre>//;s/\r$//'|tee -a $OUT
echo Result in: $OUT

