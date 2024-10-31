#include <stdio.h>
void main() {
    int num;
    printf("Enter a starting odd number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        num--;
    }
    printf("Pattern of Odd Numbers in Decreasing order:\n");
    for (int i=num; i>=1; i-=2) {
        for (int j=i; j>=1; j-=2) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
