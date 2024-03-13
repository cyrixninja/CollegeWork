#!/bin/bash
# Write a shell script to read n numbers as command arguments and sort them in descending order.

n=$#
echo "Enter the elements: "
for ((i=0;i<n;i++))
do
    arr[$i]=$1
    shift
done

for ((i=0;i<n;i++))
do
    for ((j=0;j<n-i-1;j++))
    do
        if [ ${arr[j]} -lt ${arr[$((j+1))]} ]
        then
            temp=${arr[j]}
            arr[$j]=${arr[$((j+1))]}
            arr[$((j+1))]=$temp
        fi
    done
done
echo "The sorted array in descending order is: "
for ((i=0;i<n;i++))
do
    echo -n "${arr[$i]} "
done
