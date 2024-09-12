#include <stdio.h>
int main() {
    int principal, interestRate, timePeriod, interest;
    printf("Enter Principal:"); //Principal must be between 100 Rs. to 1,000,000 Rs
    scanf("%d", &principal);
    printf("\nEnter Rate of Interest:"); //Interest rate must be between 5% to 10%
    scanf("%d", &interestRate);
    printf("\nEnter Time Period:"); //Time period must be between 1 to 10 years 
    scanf("%d", &timePeriod);

    interest = (principal * interestRate * timePeriod) / 100;

    printf("Total Interest is:%d", interest);
    return 0;
}