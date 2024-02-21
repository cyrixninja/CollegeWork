# Write a shell script to display multiplication table of given number
# !/bin/bash

echo "Enter the number: "
read n
for i in {1..10}
do
    echo "$n * $i = $(($n*$i))"
done

# Output
# sh 4.sh
# Enter the number:
# 5
# 5 * 1 = 5
# 5 * 2 = 10
# 5 * 3 = 15
# 5 * 4 = 20
# 5 * 5 = 25
# 5 * 6 = 30
# 5 * 7 = 35
# 5 * 8 = 40
# 5 * 9 = 45
# 5 * 10 = 50
