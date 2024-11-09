#include <stdio.h>
#include <string.h>
void main() {
    char words[5][50]={"apple", "banana", "cherry", "dragon fruit","elderberry"};
    char inp[50];
    int found=0;
    printf("Enter a word to check: \n");
    scanf("%s", inp);
    for(int i=0; i<5; i++) {
        if(strcmp(words[i], inp) == 0) {
            found=1;
            break;
        }
    }
    if(found) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }
}