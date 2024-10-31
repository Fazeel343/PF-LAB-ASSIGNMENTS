#include <stdio.h>
void main() {
    int matrix[3][3];
    printf("Enter elements of the 3x3 matrix:\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Saddle point(s) in the matrix:\n");
    for (int i=0; i<3; i++) {
        int min = matrix[i][0];
        int colNo = 0;
        for (int j=0; j<3; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                colNo = j;
            }
        }
        int Saddle = 1;
        for (int k = 0; k < 3; k++) {
            if (matrix[k][colNo] > min) {
                Saddle = 0;
                break;
            }
        }
        if (Saddle) {
            printf("Saddle point found: %d at position [%d][%d]\n", min, i, colNo);
        }
    }
}
