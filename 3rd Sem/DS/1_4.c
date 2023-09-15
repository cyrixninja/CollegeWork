// Write a program to create a structure of Employee with
// members: emp_id, emp_name, emp_designation, emp_salary,
// emp_department.
// Insert 5 employees information and implement the following functions
// using a menu driven method.
// ● Highest salary among all employee
// ● No of employee in specific department
// ● Display all records

#include <stdio.h>
#include <string.h>

// Define a structure for Employee
struct Employee {
    int emp_id;
    char emp_name[50];
    char emp_designation[50];
    float emp_salary;
    char emp_department[50];
};

// Function to find the employee with the highest salary
void findHighestSalary(struct Employee employees[], int n) {
    float maxSalary = employees[0].emp_salary;
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (employees[i].emp_salary > maxSalary) {
            maxSalary = employees[i].emp_salary;
            maxIndex = i;
        }
    }

    printf("Employee with the highest salary:\n");
    printf("ID: %d\n", employees[maxIndex].emp_id);
    printf("Name: %s\n", employees[maxIndex].emp_name);
    printf("Salary: %.2f\n", employees[maxIndex].emp_salary);
    printf("Department: %s\n", employees[maxIndex].emp_department);
    printf("Designation: %s\n", employees[maxIndex].emp_designation);
}

// Function to count employees in a specific department
int countEmployeesInDepartment(struct Employee employees[], int n, const char department[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(employees[i].emp_department, department) == 0) {
            count++;
        }
    }
    return count;
}

// Function to display all employee records
void displayAllRecords(struct Employee employees[], int n) {
    printf("Employee Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].emp_id);
        printf("Name: %s\n", employees[i].emp_name);
        printf("Salary: %.2f\n", employees[i].emp_salary);
        printf("Department: %s\n", employees[i].emp_department);
        printf("Designation: %s\n", employees[i].emp_designation);
        printf("\n");
    }
}

int main() {
    struct Employee employees[5]; // Assuming 5 employees

    // Input employee information
    for (int i = 0; i < 5; i++) {
        printf("Enter information for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].emp_name);
        printf("Designation: ");
        scanf("%s", employees[i].emp_designation);
        printf("Salary: ");
        scanf("%f", &employees[i].emp_salary);
        printf("Department: ");
        scanf("%s", employees[i].emp_department);
    }

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Find Employee with Highest Salary\n");
        printf("2. Count Employees in a Specific Department\n");
        printf("3. Display All Records\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                findHighestSalary(employees, 5);
                break;
            case 2:
                char department[50];
                printf("Enter the department name: ");
                scanf("%s", department);
                printf("Number of employees in department %s: %d\n", department, countEmployeesInDepartment(employees, 5, department));
                break;
            case 3:
                displayAllRecords(employees, 5);
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}
