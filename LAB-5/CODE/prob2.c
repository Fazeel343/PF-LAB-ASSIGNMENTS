#include <stdio.h>
void main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number == 0) {
        printf("%d is a zero!", number);
    }
    else if (number < 0) {
        printf("%d is a negative number", number);
    }
    else if (number > 0) {
        if (number %2 == 0) {
            printf("%d is an even number!", number);
        }
        else if (number %2 != 0) {
            printf("%d is an odd number!", number);
        }
    }
}