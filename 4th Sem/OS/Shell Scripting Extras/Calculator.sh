#!/bin/bash
# Write a Calculator using Bash

echo "Enter the First number: "
read num1

echo "Enter the Second Number"
read num2


echo "Menu"
echo "1.Addition"
echo "2.Substraction"
echo "3.Divison"
echo "4.Multiplication"

echo "Enter your choice: "
read ch


case $ch in
    1) echo "Sum : $((num1+num2))"
       ;;
    2) echo "Result: $((num1-num2))"
       ;;
    3) echo "Result: $((num1/num2))"
       ;;
    4) echo "Result: $((num1*num2))"
       ;;
    *) echo "Invalid Choice"
       ;;
esac