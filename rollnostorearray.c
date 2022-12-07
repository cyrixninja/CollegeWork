#include <stdio.h>
int x,y;
int rollno[20];
int marks[20];

void main(){

for(x=0;x<20;x++){
    printf("Enter RollNo of Student %d :",x);
    scanf("%d",&rollno[x]);
    printf("Enter Marks of Student  %d :",x);
    scanf("%d",&marks[x]);
}
for(y=0;y<20;y++){
    printf("\nRollNo of Student %d :",rollno[y]);
    printf("\nMarks of Student  %d :",marks[y]);
} 

}
