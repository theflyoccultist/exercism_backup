#!/usr/bin/env bash

if [[ $# -ne 2 ]]; then
  echo "Usage: $0 <string1> <string2>"
  exit 1
elif [[ ${#1} -ne ${#2} ]]; then
  echo "strands must be of equal length"
  exit 1
else
  count=0
  for ((i = 0; i < ${#1}; i++)); do
    a="${1:$i:1}"
    b="${2:$i:1}"

    if [[ "$a" != "$b" ]]; then
      ((count++))
    fi
  done
  echo "$count"
fi
