#!/bin/bash
# Write a shell script to display all executable files, directories and zero sized files from current directory.
# !/bin/bash

echo "Executable files in the current directory are:"
ls -l | grep "^-rwx" | awk '{print $9}'
echo "Directories in the current directory are:"
ls -l | grep "^d" | awk '{print $9}'
echo "Zero sized files in the current directory are:"
ls -l | grep "^-" | awk '{if($5==0) print $9}'

# Output
# Executable files in the current directory are:
# 10.sh
# 11.sh
# 12.sh
# 13.sh