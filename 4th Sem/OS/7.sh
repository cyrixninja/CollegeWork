#!/bin/bash
# Write a shell script which will generate first n fibonnacci numbers like: 1, 1, 2, 3, 5, 13, ...


echo "Enter Value of N"
read -r n

echo "The Fibonacci Series is :"

a=0
b=1

for ((i = 0; i < n; i++))
do
    echo "$a"
    temp=$((a + b))
    a=$b
    b=$temp
done
