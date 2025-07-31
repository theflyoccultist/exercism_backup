#!/usr/bin/env bash

input=$(echo "$1" | sed 's/[-_*]/ /g')
acronym=""

for word in $input; do
  firstchar="${word:0:1}"
  acronym+="${firstchar^^}"
done

echo "$acronym"
