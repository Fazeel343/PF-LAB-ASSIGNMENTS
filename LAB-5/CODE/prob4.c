#include <stdio.h>
void main() {
    int age;
    char nationality;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\nEnter your nationaltiy: ");    //initials only
    scanf(" %c", &nationality);
    if(age >= 18 && (nationality == 'P' || nationality == 'p')) {
        printf("You are eligible to vote!\n");
    }
    else printf("You are not eligible!\n");
}