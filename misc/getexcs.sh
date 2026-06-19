#!/bin/bash
# Downlowding exercise and make note in the comment at the end like this:
# https://c-for-dummies.com/blog/wp-content/uploads/2013/07/07exercise.c

URL="${1}"

[[ -z "${URL}" ]] && {
	echo "Usage: $0 <URL_of_the_exercize>" >&2
	exit 1
}

wget "${URL}" && printf "\n/*\n\t%s\n*/\n\n" "${URL}" >> `basename "${URL}"`

