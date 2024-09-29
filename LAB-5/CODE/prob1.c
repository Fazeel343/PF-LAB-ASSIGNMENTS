#include <stdio.h>
void main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 13) {
        printf("You are a Child!");
    } else if (age >= 13 && age < 20) {
        printf("You are a Teenager!");
    } else if (age >= 20 && age < 64) {
        printf("You are an Adult!");
    } else printf("You are a Senoir!");
} 