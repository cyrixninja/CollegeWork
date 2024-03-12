# Write a shell script to read n numbers as command arguments and sort them in descending order.
# !/bin/bash

echo "Enter the number of elements: "
read n
echo "Enter the elements: "
for ((i=0;i<n;i++))
do
    read arr[$i]
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

# Output
# Enter the number of elements:
# 5
# Enter the elements:
# 5
# 4
# 3 
# 9
# 8
# The sorted array in descending order is:
# 9 8 5 4 3