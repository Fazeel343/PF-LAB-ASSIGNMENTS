#include <stdio.h>
void swapIntegers(int *a,int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void main() {
    int a, b;
    printf("Enter two values: \n");
    scanf("%d%d", &a, &b);
    printf("Before Swapping:\na:%d\nb:%d\n", a, b);
    swapIntegers(&a,&b);
    printf("After Swapping:\na:%d\nb:%d\n", a, b);
}