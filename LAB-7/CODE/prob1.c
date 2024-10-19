#include <stdio.h>
void main() {
    int n, sum = 0;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) { 
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("\nSum of elements: %d\n", sum);
}
