#include <stdio.h>
char* numCheck(int a) {
    if(a % 2 == 0) {
        return "Even";
    } else  {
        return "Odd";
    }
}
void main() {
    int b;
    printf("Enter any number: ");
    scanf("%d", &b);
    char* result = numCheck(b);
    printf("%d is %s",  b, result);
}