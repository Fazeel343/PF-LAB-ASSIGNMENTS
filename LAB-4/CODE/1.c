#include <stdio.h>
int main() {
    int num1;
    printf("Enter a number:");
    scanf("%d",&num1);
    if (num1%3 ) {
        printf("This number is not multiple of 3");
    } else printf("This number is a amultiple of 3");
    return 0;
}cls