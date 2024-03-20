#!/bin/bash
# Write a Shell Script to perform basic Queue operations like : 1. ENQUEUE   2. DEQUEUE    3. DISPLAY

# Queue Operations

##Enqueue Operation
enqueue() {
    queue[$rear]=$1
    ((rear++))
}

##Dequeue Operation

dequeue() {
    echo "Dequeued Element: ${queue[$front]}"
    unset queue[$front]
    ((front++))
}


##Display Queue
display() {
    echo "Queue: ${queue[@]}"
}

# Main Function

front=0
rear=0


top=0
echo "Menu"
echo "1. Enqueue"
echo "2. Dequeue"
echo "3. Display"
echo "4. Exit"


while [ 1 ]
do
    echo "Enter your choice: "
    read ch
    case $ch in
        1) echo "Enter the element: "
           read ele
           enqueue $ele
           ;;
        2) dequeue
           ;;
        3) display
           ;;
        4) exit
           ;;
        *) echo "Invalid Choice"
           ;;
    esac
done


