#!/usr/bin/env bash

i=${1,,}

if [[ ! "$i" =~ [a-z] ]]; then
  echo 0
  exit 0
fi

total=0

for ((j = 0; j < ${#i}; j++)); do
  char="${i:j:1}"
  case "$char" in
  [aeioulnrst])
    ((total += 1))
    ;;
  [dg])
    ((total += 2))
    ;;
  [bcmp])
    ((total += 3))
    ;;
  [fhvwy])
    ((total += 4))
    ;;
  [k])
    ((total += 5))
    ;;
  [jx])
    ((total += 8))
    ;;
  [qz])
    ((total += 10))
    ;;
  *)
    ((total += 0))
    ;;
  esac
done

echo "$total"
