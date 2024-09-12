#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter num1:");
    scanf("%d", &a);
    printf("\nEnter num2:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Number1 is:%d\nNumber2 is:%d",a ,b);
    return 0;
}