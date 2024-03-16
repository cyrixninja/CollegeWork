#!/bin/bash
# Write an awk program using function, which convert each word in a given text into capital.

# Define the text
echo "Please enter some text:"
read sampletxt

# Use awk to convert each word to uppercase
echo $sampletxt | awk '{ 
    for (i=1; i<=NF; i++) {
        $i = toupper($i)
    }
    print $0
}'
