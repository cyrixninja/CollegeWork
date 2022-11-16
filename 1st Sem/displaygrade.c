// Write a C program to read marks from ketyboard and display equivalent grade using if else ladder
#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks ");
    scanf("%d", &marks);
    if (marks > 0 && marks <40) {
        printf("Failed\n");
    }
    else if (marks >= 40 && marks < 60)
    {
         printf("Second Class\n");
    }
        else if (marks >= 60 && marks <80)
    {
         printf("First Class\n");
    }      else if (marks >= 80 && marks < 100)
    {
         printf("Distinction\n");
    }

     return 0;

}

