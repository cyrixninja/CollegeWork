#!/bin/bash
# Shell programming using filters (including grep, egrep, fgrep)

# fgrep example
while true
do
echo "Please enter a string"
read input_string
echo "Please enter the file name too see if that string is present in it - (Enter .abw after)"
read input_string1
if grep -q $input_string $input_string1 ; then
echo "Your string has been found"
fi
done

# egrep example
egrep '3|4|5' *
egrep -i 'apple|banana|orange' *

#frgep example
fgrep 3.sh *
fgrep "echo" 3.sh
# Search for "echo" in the file 3.sh