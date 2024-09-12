#include <stdio.h>
int main () {
    float  taxRate, salary, tax, income;
    printf("Enter taxrate:");
    scanf("%f", &taxRate);
    printf("Enter Salary:");
    scanf("%f", &salary);
    tax = (taxRate * salary) / 100;
    income = salary - tax;
    printf("Tax is:%.2f \nYour income is:%.2f", tax, income);
    return 0;
}