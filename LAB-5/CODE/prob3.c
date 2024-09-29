#include <stdio.h>
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0)
    printf("%d is divisble by both 3 & 5", num);
    else printf("%d is not divisble by both 3 & 5", num);
}