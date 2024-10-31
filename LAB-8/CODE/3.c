#include <stdio.h> 
void main() {
    int start, end;
    printf("Enter the start of the range: \n");
    scanf("%d", &start);
    printf("Enter the end of the range: \n");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);

    for(int num=start; num<=end; num++) {
        if(num < 2) {
            continue;
        }
        int prime = 1;
        for(int i=2; i*i <=num; i++) {
            if(num % i == 0) {
                prime = 0;
                break;
            }
        }
        if(prime) {
            printf("%d  ", num );
        }
    }  
}