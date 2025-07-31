#!/usr/bin/env bash

input="$1"
trimmed_input="${input//[^a-zA-Z]/}"
trimmed_input2=$(tr -d ' \t\r' <<<"$input")

is_uppercase=false
is_question=false
is_silence=false

if [[ "$trimmed_input" =~ ^[[:upper:]]+$ ]]; then
  is_uppercase=true
fi

if [[ "$trimmed_input2" == *\? ]]; then
  is_question=true
fi

if [[ -z "$trimmed_input2" ]]; then
  is_silence=true
fi

if [[ "$is_silence" == true ]]; then
  echo "Fine. Be that way!"
elif [[ "$is_uppercase" == true && "$is_question" == true ]]; then
  echo "Calm down, I know what I'm doing!"
elif [[ "$is_uppercase" == true ]]; then
  echo "Whoa, chill out!"
elif [[ "$is_question" == true ]]; then
  echo "Sure."
else
  echo "Whatever."
fi
