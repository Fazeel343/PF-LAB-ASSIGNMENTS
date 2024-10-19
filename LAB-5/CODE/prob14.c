#include <stdio.h>
void main() {
    int age, income, credit_score;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\nEnter your income: ");
    scanf("%d", &income);
    printf("\nEnter your credit score: ");
    scanf("%d", &credit_score);
    if(age >= 18) {
        if(income <= 70000 && credit_score >= 600) {
            printf("\nYou are Eligible!");
        } else {
            printf("\nYou are not eligible!");
        }
    } else {
        printf("\nYou are not Eligible!");
    }
}