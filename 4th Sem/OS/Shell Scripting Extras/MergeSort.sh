#!/bin/bash
# Write a Shell Script to perform Merge Sort    

echo "Enter the number of elements: "
read n
echo "Enter the elements: "
for (( i=0; i<n; i++ ))
do
    read arr[$i]
done


#Merge Sort Algorithm
merge_sort(){
    local arr=($@)
    local n=${#arr[@]}
    if [ $n -le 1 ]; then
        echo ${arr[@]}
    else
        local mid=$((n/2))
        local left=($(merge_sort ${arr[@]:0:mid}))
        local right=($(merge_sort ${arr[@]:mid}))
        local result=()
        while [ ${#left[@]} -gt 0 ] && [ ${#right[@]} -gt 0 ]; do
            if [ ${left[0]} -le ${right[0]} ]; then
                result+=(${left[0]})
                left=(${left[@]:1})
            else
                result+=(${right[0]})
                right=(${right[@]:1})
            fi
        done
        result+=(${left[@]})
        result+=(${right[@]})
        echo ${result[@]}
    fi
}


# Sort and Print the Array using Algorithm
sorted=($(merge_sort ${arr[@]}))
echo "Sorted Array: ${sorted[@]}"