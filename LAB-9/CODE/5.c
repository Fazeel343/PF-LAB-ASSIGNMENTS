#include <stdio.h>
#include <string.h>
int isPalindrome(char words[]) {
    int len = strlen(words);
    for(int i=0; i < len / 2; i++) {
        if(words[i] != words[len - i - 1]) {
            return 0;
        } 
    }
    return 1;
}
void main() {
    char words[5][30];
    printf("Enter 5 words:\n");
    for(int i=0; i<5; i++) {
        printf("Word#%d:", i+1);
        scanf("%s", words[i]);
    }
    for(int i=0; i<5; i++) {
        if(isPalindrome(words[i])) {
            printf("\n%s: Palindrome", words[i]);
        } else {
            printf("\n%s: Not Palindrome", words[i]);
        }              
    }
}

