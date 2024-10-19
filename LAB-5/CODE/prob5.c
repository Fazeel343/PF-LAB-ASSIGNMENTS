#include <stdio.h>
void main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    (num1 > num2) ? printf(" %d is maximum!", num1) :
    (num2 > num1) ? printf("%d is maximum!", num2) : printf("Number1 & Number2 are equal!");
}