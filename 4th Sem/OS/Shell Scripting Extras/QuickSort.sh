#!/bin/bash
# Write a Shell Script to perform quick sort

echo "Enter the number of elements: "
read n
echo "Enter the elements: "
for (( i=0; i<n; i++ ))
do
    read arr[$i]
done

#Quick Sort Algorithm
quick_sort() {
    local left=()
    local right=()
    local pivot=$1
    shift
    for i in $@; do
        if [ $i -lt $pivot ]; then
            left+=($i)
        else
            right+=($i)
        fi
    done
    if [ ${#left[@]} -gt 1 ]; then
        left=($(quick_sort ${left[@]}))
    fi
    if [ ${#right[@]} -gt 1 ]; then
        right=($(quick_sort ${right[@]}))
    fi
    echo ${left[@]} $pivot ${right[@]}
}

sorted=($(quick_sort ${arr[@]}))

# Print Sorted Array
echo "Sorted Array: ${sorted[@]}"
