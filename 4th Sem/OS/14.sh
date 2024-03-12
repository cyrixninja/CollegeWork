# Write a shell script to validate the entered date. (eg. Date format is : dd-mm-yyyy).
# !/bin/bash

echo "Enter the date in dd-mm-yyyy format: "
read date
day=${date:0:2}
month=${date:3:2}
year=${date:6:4}
if [ $month -eq 2 ]
then
    if [ `expr $year % 4` -eq 0 -a `expr $year % 100` -ne 0 -o `expr $year % 400` -eq 0 ]
    then
        if [ $day -gt 29 ]
        then
            echo "Invalid date."
        else
            echo "Valid date."
        fi
    else
        if [ $day -gt 28 ]
        then
            echo "Invalid date."
        else
            echo "Valid date."
        fi
    fi
elif [ $month -eq 4 -o $month -eq 6 -o $month -eq 9 -o $month -eq 11 ]
then
    if [ $day -gt 30 ]
    then
        echo "Invalid date."
    else
        echo "Valid date."
    fi
else
    if [ $day -gt 31 ]
    then
        echo "Invalid date."
    else
        echo "Valid date."
    fi
fi

# Output
# Enter the date in dd-mm-yyyy format:
# 29-02-2024
# Valid date.