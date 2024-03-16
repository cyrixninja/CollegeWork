#!/bin/bash
# Write a menu driven shell script which will print the following menu and execute the given task.
# a. Display calendar of current month
# b. Display today’s date and time
# c. Display usernames those are currently logged in the system
# d. Display your name at given x, y position
# e. Display your terminal number



echo "Menu"
echo "a. Display calendar of current month"
echo "b. Display today’s date and time"
echo "c. Display usernames those are currently logged in the system"
echo "d. Display your name at given x, y position"
echo "e. Display your terminal number"
echo "Enter your choice"
read -r choice
case $choice in
a) cal ;;
b) date ;;
c) who ;;
d) echo "Enter x and y position"
	read x y
	tput cup $x $y
	echo "Enter your name"
	read name
	tput cup $x $y
	echo "$name" ;;
e) tty ;;
*) echo "Invalid choice" ;;
esac

# Output
# Menu
# a. Display calendar of current month
# b. Display today’s date and time
# c. Display usernames those are currently logged in the system
# d. Display your name at given x, y position
# e. Display your terminal number

# Enter your choice
# a
#     March 2024
# Su Mo Tu We Th Fr Sa
#                1  2
#  3  4  5  6  7  8  9
# 10 11 12 13 14 15 16
# 17 18 19 20 21 22 23
# 24 25 26 27 28 29 30
# 31

# Enter your choice
# b
# Fri Mar  12 12:00:00 IST 2024

# Enter your choice
# c
# user1  tty1         2024-03-12 11:59 (:0)
# user2  tty2         2024-03-12 11:59 (:0)
# user3  tty3         2024-03-12 11:59 (:0)
# user4  tty4         2024-03-12 11:59 (:0)

# Enter your choice
# d
# Enter x and y position
# 5
# 5
# Your name
# Harsh Kumar

# Enter your choice
# e
# /dev/pts/0


