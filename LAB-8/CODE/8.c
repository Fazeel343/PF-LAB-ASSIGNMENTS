#include <stdio.h>
void main() {
    int rows;
    printf("Enter the number of rows for the upper half of the diamond: ");
    scanf("%d", &rows);
    for (int i=1; i<=rows; i++) {
        for (int j=i; j<rows; j++) {
            printf(" "); 
        }
        for (int j=1; j<=(2 * i -1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=rows-1 ; i>=1; i--) {
        for (int j=rows; j>i; j--) {
            printf(" ");
        }
        for (int j=1; j<=(2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    } 
}