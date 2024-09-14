#include <stdio.h>
int main() {
    int num1, num2;
    char operator;
    float result;
    printf("Enter number 1:");
    scanf("%d", &num1);
    printf("\nEnter number 2:");
    scanf("%d", &num2);
    printf("\nEnter the operator(+,-,*,/): ");
    scanf(" %c", &operator);
    switch(operator) {
        case '+':
        result = num1 + num2;
        printf("Resultant is %.2f", result);
        break;
        case '-':
        result = num1 - num2;
        printf("Resultant is %.2f", result);
        break;
        case '*':
        result = num1 * num2;
        printf("Resultant is %.2f", result);
        break;
        case '/':
          if (num2 != 0) {
            printf("Resultant is %.2f", result);
          } else printf("ERROR: Denominator is 0");
          break;
        default: printf("Invalid Operator!");
    }    
    return 0;

}