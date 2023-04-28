#!/bin/bash

#Checks If file name is provided as argument
if [ $# -ne 1 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

file="$1"

#Checks if file exits
if [ ! -e "$file" ]; then
    echo "Error: File '$file' does not exit"
    exit 1
fi

#Remove trailing whitespace using sed command
sed -i 's/\s\+$//' "$file"

echo "Trailing whitespace removed from '$file'"
