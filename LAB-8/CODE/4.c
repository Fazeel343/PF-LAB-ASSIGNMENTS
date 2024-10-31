#include <stdio.h>
void main() {
    int matrix[2][3][4] = {
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {10,11,12},
            {13,14,15},
            {16,17,18}
        }
    };
    int sumPg1=0, sumPg2=0;
    for(int pg=0; pg<2; pg++) {
        int sum=0;
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                sum += matrix[pg][i][j];
            }
        }
        if(pg == 0) {
            sumPg1 = sum;
        } else {
            sumPg2 = sum;
        }
    }
    printf("Sum of elements on page 1: %d\n", sumPg1);
    printf("Sum of elements on page 2: %d\n", sumPg2);
}