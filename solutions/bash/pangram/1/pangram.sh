#!/usr/bin/env bash

input="${1//[^a-zA-Z]/}"
input="${input,,}"

for c in {a..z}; do
  if [[ "$input" != *"$c"* ]]; then
    echo false
    exit 0
  fi
done

echo true
