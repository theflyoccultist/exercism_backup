#!/usr/bin/env bash

person=$1
if [[ $# != 1 ]]; then
  echo "Usage: $0 <person>"
  exit 1
fi

echo "Hello, $person"
