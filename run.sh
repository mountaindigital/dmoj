#!/usr/bin/env bash

gcc -o solution main.c
./solution < fixture.txt > output.txt
diff expected.txt output.txt
