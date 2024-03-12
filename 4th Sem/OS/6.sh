# Write a shell script which will accept a number b and display first n prime numbers as output.
# !/bin/bash

echo "Enter the value of n"
read n
echo "The first $n prime numbers are:"
a=2
count=0
while [ $count -lt $n ]
do
i=2
flag=0
while [ $i -lt $a ]
do
if [ `expr $a % $i` -eq 0 ]
then
flag=1
fi
i=`expr $i + 1`
done
if [ $flag -eq 0 ]
then
echo $a
count=`expr $count + 1`
fi
a=`expr $a + 1`
done

# Output
# Enter the value of n
# 5
# The first 5 prime numbers are:
# 2
# 3
# 5
# 7
# 11



