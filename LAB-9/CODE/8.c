#include <stdio.h>
int answer(int a,int b,char operation) {
    switch (operation) {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '*': 
        return a * b;
        break;
    case '/':
        if(b != 0) { 
            return a / b;
        } else {
            printf("\nError: Division by zero!\n");
            return 0;
        }
        break;
    default:
        printf("\nError: Invalid Operator!\n");
        return 0;
        break;
    }
}
void main() {
    int a, b;
    char operation;
    printf("Enter any two integers: ");
    scanf("%d%d", &a, &b);
    printf("\nEnter any arithmetic operation (+,-,*,/): ");
    scanf(" %c", &operation);
    int result = answer(a,b,operation);
    if(operation == '/' && b == 0) {
    } else if(operation != '+' && operation !='-' && operation != '/' && operation != '*') {
    } else {
        printf("\n%d %c %d = %d", a, operation, b, result);
    }
}