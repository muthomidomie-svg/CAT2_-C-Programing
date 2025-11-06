/*
Name : Dominic Muthomi 
REG NO: CT101G/26556/25
DATE :6/11/2025
Description: a program to calculate emoloys pay
*/
 
#include <stdio.h>
int main() {
    double hours, wage;
    double gross_pay, taxes, net_pay;

    // Input
    printf("Enter hours worked in a week: ");
    scanf("%lf", &hours);

    printf("Enter hourly wage: ");
    scanf("%lf", &wage);

    // Gross pay calculation
    if (hours <= 40) {
        gross_pay = hours * wage;
    } else {
        gross_pay = (40 * wage) + ((hours - 40) * wage * 1.5);
    }

    // Tax calculation
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }

    // Net pay
    net_pay = gross_pay - taxes;

    // Output
    printf("\nGross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}