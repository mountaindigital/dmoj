#!/usr/bin/env bash

gcc -o solution main.c

for ((i=0; i<10; i++)); do
    FIXTURE="fixture${i}.txt" 
    if ! [ -f $FIXTURE ]; then
        continue 
    fi 

    echo $FIXTURE:
    ./solution < $FIXTURE > output.txt
    diff "expected${i}.txt" output.txt
    # cmp "expected${i}.txt" output.txt
done
