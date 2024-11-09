#include <stdio.h>
#include <string.h>
void main() {
    char dest[20];
    char src[20];
    int n;
    printf("Enter your destination string: \n");
    scanf("%s", dest);
    printf("Enter your source string: \n");
    scanf("%s", src);
    printf("Enter the number of characters you want to append: \n");
    scanf("%d", &n);
    strncat(dest, src, n);
    printf("Resulting destination string:\n%s", dest);
}