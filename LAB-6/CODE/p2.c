#include <stdio.h>
void main() {
    int i, num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    i = num;  
    while(i != 0) {
        i /= 10;
        digit++;
    }
    if(digit > 1) {
        printf("%d is a multiple digit number.", num);
    } else {
        printf("%d is not a multiple digit number.", num);
    }
}