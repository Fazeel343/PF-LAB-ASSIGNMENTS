#include <stdio.h>
int product(int a, int b) {
    return a*b;
}
int main() {
    int result = product(4,8);
    printf("%d", result);
    return result;
}