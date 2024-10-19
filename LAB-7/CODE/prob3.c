#include <stdio.h>
void main() {
    int n, min, max;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    min = max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("\nMinimum Number = %d\n", min);
    printf("Maximum Number = %d\n", max);
}
