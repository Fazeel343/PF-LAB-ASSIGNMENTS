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
    if(num == 1) {
        printf("%d is neither prime nor composite number.", num);
    }
    else if(digit > 1) {
        if(num %2 == 0) {
            printf("%d is a multiple digit composite number.", num);
        }else if(num %3 == 0 || num %5 == 0 || num %7 == 0 || num %9 == 0) {
            printf("%d is a multiple digit composite number.", num);
        }else {
            printf("%d is a multiple digit prime number.", num);
        }
    } else if(digit == 1) {
        if(num %2 == 0) {
            if(num == 2) {
                printf("%d is a prime number but not a multiple digit.", num);
            }else {
                printf("%d is a composite number but not a multiple digit.", num);
            }
        }else if(num %2 != 0) {
            if(num %3 == 0 && num %9== 0) {
                printf("%d is a composite number but not a multiple digit.", num);
            }else {
                printf("%d is a prime number but not a multiple digit.", num);
            }
        }
    } else {
        printf("Given number is ZERO.");
    }
} 