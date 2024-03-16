// Write a program for process creation using C. (Use of gcc compiler)
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t pid;

    /* fork a child process */
    pid = fork();

    if (pid < 0) { /* error occurred */
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    else if (pid == 0) { /* child process */
        printf("I am the child %d\n",pid);
    }
    else { /* parent process */
        /* parent will wait for the child to complete */
        printf("I am the parent %d\n",pid);
    }

    return 0;
}