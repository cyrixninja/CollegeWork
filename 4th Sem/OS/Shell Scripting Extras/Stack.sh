#!/bin/bash
# Write a Shell Script to perform basic Stack operations like : 1. PUSH   2. POP    3. DISPLAY 

# Stack Operations

##Push Operation
push() {
    stack[$top]=$1
    ((top++))
}

##Pop Operation
pop() {
    ((top--))
    echo "Popped Element: ${stack[$top]}"
}

##Display Stack
display() {
    echo "Stack: ${stack[@]}"
}

# Main Function

top=0
echo "Menu"
echo "1. Push"
echo "2. Pop"
echo "3. Display"
echo "4. Exit"


while [ 1 ]
do
    echo "Enter your choice: "
    read ch
    case $ch in
        1) echo "Enter the element: "
           read ele
           push $ele
           ;;
        2) pop
           ;;
        3) display
           ;;
        4) exit
           ;;
        *) echo "Invalid Choice"
           ;;
    esac
done

