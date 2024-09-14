#include <stdio.h>
int main() {
    int units, customerID;
    char name[50];
    float chargesPerUnit, totalAmount, subcharges, subChargedAmount;
    printf("Enter your ID: ");
    scanf("%d", &customerID);
    printf("Enter your name: "); 
    scanf("%s", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);
    if(units < 200) {
        printf("Customer ID: %d", customerID);
        printf("\nCustomer Name: %s", name);
        printf("\nUnits Consumed: %d", units);
        chargesPerUnit = 16.2;
        totalAmount = chargesPerUnit * units;
        printf("\nTotal Amount to Pay: %.2f", totalAmount);
    }
    else if(units >= 200 && units < 300) {
        printf("Customer ID: %d", customerID);
        printf("\nCustomer Name: %s", name);
        printf("\nUnits Consumed: %d", units);
        chargesPerUnit = 20.10;
        totalAmount = chargesPerUnit * units;
        printf("\nTotal Amount to Pay: %.2f", totalAmount);
    }
    else if(units >= 300 && units < 500) {
        printf("Customer ID: %d", customerID);
        printf("\nCustomer Name: %s", name);
        printf("\nUnits Consumed: %d", units);
        chargesPerUnit = 28.10;
        totalAmount = chargesPerUnit * units;
        printf("\nTotal Amounxt to Pay: %.2f", totalAmount);
    }
    else if(units >= 500) {
        printf("Customer ID: %d", customerID);
        printf("\nCustomer Name: %s", name);
        printf("\nUnits Consumed: %d", units);
        chargesPerUnit = 35.90;
        totalAmount = chargesPerUnit * units;
        if (totalAmount > 18000) {
            subcharges = totalAmount * 0.15;
            subChargedAmount = totalAmount + subcharges;
            printf("\nSubcharges: %.2f", subcharges);
            printf("\nTotal Amount to Pay: %.2f", subChargedAmount);
        }
        else{
            printf("\nTotal Amount to Pay: %.2f", totalAmount);     
        }
    }
    return 0;
}