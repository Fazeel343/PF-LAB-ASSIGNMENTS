#include <stdio.h>
void main() {
    int matrix[2][2], transpose[2][2];
    printf("Enter elements of the 2X2 matrix:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("Elements [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nTransposeof matrix is:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}