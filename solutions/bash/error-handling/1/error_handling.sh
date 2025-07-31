#!/usr/bin/env bash

person=$1
if [[ -z "$person" ]]; then
  echo "Usage: $0 <person>"
  exit 1
fi

echo "Hello, $person"
