#!/bin/bash
# Write the Shell Script to Perform Bubble Sort

# Taking User Input
echo "Enter the number of elements: "
read n
echo "Enter the elements: "
for (( i=0; i<n; i++ ))
do
    read arr[$i]
done

# Bubble Sort Algorithm
for (( i=0; i<n; i++ ))
do
    for (( j=0; j<n-i-1; j++ ))
    do
        if [ ${arr[$j]} -gt ${arr[$((j+1))]} ]; then
            temp=${arr[$j]}
            arr[$j]=${arr[$((j+1))]}
            arr[$((j+1))]=$temp
        fi
    done
done


# Print Sorted Array

echo "Sorted Array: ${arr[@]}"

