#include <stdio.h>
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num > 0) ? printf("%d is Even!", num) :
    (num < 0) ? printf("%d is Odd!", num) : printf("Number is Zero!", num);
}