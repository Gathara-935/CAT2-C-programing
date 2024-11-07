*/
Author:Maxwell Gathara
Reg no:CT101/G/2271/24
Date:07/11/24
/*
#include <stdio.h>

int main() {
    float hours_worked, hourly_wage, gross_pay, tax, net_pay;
    
    // user input
    printf("Enter the number of hours worked in a week: ");
    scanf("%f", &hours_worked);
    printf("Enter the hourly wage: ");
    scanf("%f", &hourly_wage);
    
    // Calculate gross pay
    if (hours_worked > 40) {
        float overtime_hours = hours_worked - 40;
        float overtime_pay = overtime_hours * hourly_wage * 1.5;
        gross_pay = (40 * hourly_wage) + overtime_pay;
    } else {
        gross_pay = hours_worked * hourly_wage;
    }
    
    // Calculate tax
    if (gross_pay <= 600) {
        tax = gross_pay * 0.15;
    } else {
        tax = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }
    
    // Calculate net pay
    net_pay = gross_pay - tax;
    
    // Print results
    printf("Gross Pay: sh%.2f\n", gross_pay);
    printf("Taxes: sh%.2f\n", tax);
    printf("Net Pay: sh%.2f\n", net_pay);
    
    return 0;
}
