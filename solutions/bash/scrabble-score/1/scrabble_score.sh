#!/usr/bin/env bash

i=${1,,}

a=$(echo "$i" | grep -o "[aeioulnrst]" | wc -l)
b=2*$(echo "$i" | grep -o "[dg]" | wc -l)
c=3*$(echo "$i" | grep -o "[bcmp]" | wc -l)
d=4*$(echo "$i" | grep -o "[fhvwy]" | wc -l)
e=5*$(echo "$i" | grep -o "[k]" | wc -l)
f=8*$(echo "$i" | grep -o "[jx]" | wc -l)
g=10*$(echo "$i" | grep -o "[qz]" | wc -l)
tot=$((a + b + c + d + e + f + g))

echo "$tot"
