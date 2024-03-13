#!/bin/bash
# Write a shell script to find factorial of given number n


echo "Enter a number"
read -r n

fact=1
for((i=1;i<=n;i++))
do
  fact=$((fact * i))
done

echo "Factorial of $n is $fact"

# Output
# sh 5.sh
# Enter a number
# 5
# Factorial of 5 is 120