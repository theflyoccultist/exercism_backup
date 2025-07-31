#!/usr/bin/bash

digit_count=$(awk -F '[0-9]' '{print NF-1}' <<<"$1")
result=0

for ((i = 0; i < ${#1}; i++)); do
  power=$((${1:i:1} ** digit_count))
  result=$((result + power))
done

[ "$1" == "$result" ] && echo true || echo false
