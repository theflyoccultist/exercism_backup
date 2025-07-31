#!/usr/bin/bash

result=0

for ((i = 0; i < ${#1}; i++)); do
  power=$((${1:i:1} ** ${#1}))
  result=$((result + power))
done

[ "$1" == "$result" ] && echo true || echo false
