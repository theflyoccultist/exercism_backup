#!/usr/bin/bash

digit_count=$(awk -F '[0-9]' '{print NF-1}' <<<"$1")
result=0

for ((i = 0; i < ${#1}; i++)); do
  digit="${1:i:1}"
  power=$(echo "$digit ^ $digit_count" | bc)
  result=$((result + power))
done

if [ "$1" == "$result" ]; then
  echo true
else
  echo false
fi
