#!/usr/bin/env bash

sound=""
(($1 % 3 == 0)) && sound+="Pling"
(($1 % 5 == 0)) && sound+="Plang"
(($1 % 7 == 0)) && sound+="Plong"

echo "${sound:-$1}"
