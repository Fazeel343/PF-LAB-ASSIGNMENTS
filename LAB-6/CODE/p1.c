#include <stdio.h>
void main() {
    int num, sum = 0;
    do{
        printf("\nEnter a number: ");
        scanf("%d", &num);
        sum = sum + num;
        printf("\nSum= %d", sum);
    }
    while(num != 0);
    printf("\nTotal sum is: %d", sum);
}