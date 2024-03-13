#!/bin/bash
# Write a program for process creation using C. (Use of gcc compiler).


echo "Enter the file name"
read file
if [ -f $file ]
then
    echo "File found"
    echo "Enter the process name"
    read process
    if [ -z $process ]
    then
        echo "No process found"
    else
        echo "Process found"
    fi
else
    echo "File not found"
fi
