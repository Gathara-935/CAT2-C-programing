*/
Author:Maxwell Gathara
Reg no:CT101/G/2271/24
Date:07/11/24
/*
#include <stdio.h>

// Define the structure 'employee'
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Declare and initialize a variable of type 'employee'
    struct employee emp = {
        "John Doe",
        56567,
        "Human Resources",
        55000.50,
        "john.doe@company.com"
    };

    // Print the values of the fields
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}
