#!/bin/bash
# Write a shell script which will generate first n fibonnacci numbers like: 1, 1, 2, 3, 5, 13, ...


echo "Enter the value of n :"
read -r n
echo "The first $n fibonacci numbers are:"
a=0
b=1
count=0
while [ $count -lt $n ]
do
echo -n "$a "
fn=`expr $a + $b`
a=$b
b=$fn
count=`expr $count + 1`
done

# Output
# Enter the value of n :
# 5
# The first 5 fibonacci numbers are:
# 0 1 1 2 3 %   


