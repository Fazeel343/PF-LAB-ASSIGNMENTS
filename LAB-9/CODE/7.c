#include <stdio.h>
int isPrime(int num) {
    if(num==0 || num==1) {
        return 0;
    }
    for(int i=2; i <= num/2; i++) {
        if(num%i ==0) {
            return 0;
            break;
        }
    }
    return 1;
}
void main() {
    int num, found;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(isPrime(num) == 1) {
        printf("%d is a Prime Number", num);
    } else {
        printf("%d is not a Prime Number", num);
    }
}