#include <stdio.h>
#include <string.h>
char*revStr(char str[]) {
    int len = strlen(str);
    for(int i=0; i <len/2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i -1]= temp;
    }
    return str;
}
void main() {
    char str[200];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Reversed String: %s\n", revStr(str));
}