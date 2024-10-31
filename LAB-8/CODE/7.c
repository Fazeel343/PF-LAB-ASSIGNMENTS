#include <stdio.h>
void main() {
    int matrix1[3][3], matrix2[3][3], product[3][3];
    printf("Enter elements of the first 3x3 matrix:\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of the second 3x3 matrix:\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            product[i][j] = 0;  
            for (int k = 0; k < 3; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Product of Matrix Multiplication:\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
}
