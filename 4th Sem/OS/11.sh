# Write a shell script to check entered string is palindrome or not.
# !/bin/bash

echo "Enter a string: "
read str
len=${#str}
i=0
j=$((len-1))
flag=0
while [ $i -lt $j ]
do
    if [ ${str:$i:1} != ${str:$j:1} ]
    then
        flag=1
        break
    fi
    i=$((i+1))
    j=$((j-1))
done
if [ $flag -eq 0 ]
then
    echo "The entered string is a palindrome."
else
    echo "The entered string is not a palindrome."
fi

# Output
# Enter a string:
# madam
# The entered string is a palindrome.

# Enter a string:
# hello
# The entered string is not a palindrome.