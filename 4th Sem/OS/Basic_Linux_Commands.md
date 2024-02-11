# Basic Linux Commands

## Navigating the File System:

- pwd: Print the current working directory. 

- ls: List files and directories. 

- ls -l: Detailed list view.

- ls -a: List all files, including hidden ones.

- cd: Change directory.

- cd .. : Move up one directory.

- cd ~ or cd: Go to the home directory.

## File and Directory Operations:

- mkdir [directory_name]: Create a new directory.

- touch [file_name]: Create an empty file.

- cp [source] [destination]: Copy files or directories.

- mv [source] [destination]: Move or rename files or directories.

- rm [file]: Remove/delete a file.

- rm -r [directory]: Remove a directory and its contents (use with caution).


## Viewing and Editing Files:

- cat [file]: Display the entire file.

- more [file] or less [file]: View file 
content one screen at a time.

- nano [file] or vim [file]: Open a text editor to modify a file.


## Searching for Files:

- find [directory] -name [filename]: Search for a file in a directory.

- grep [pattern] [file]: Search for a pattern in a file.

- locate [filename]: Quickly find the location of a file (needs an updated database).

## User and Permission Management:

- whoami: Display the current user.
passwd: Change your password.

- chmod [permissions] [file]: Change file permissions.

- chown [user]:[group] [file]: Change the owner of a file.

## System Information:

- uname -a: Display system information.

- df -h: Show disk space usage.

- free -m: Display free and used memory.

## Process Management:

- ps: Display a snapshot of current processes.

- top or htop: Interactive process viewer.

- kill [process_id]: Terminate a process.

- killall [process_name]: Terminate all instances of a process.

## Networking:

- ifconfig or ip a: Display network interface information.

- ping [host]: Send ICMP echo requests to a host.

- traceroute [host]: Display the route packets take to reach a destination.
