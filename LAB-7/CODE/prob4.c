#include <stdio.h>
void main() {
    int n; 
    int freq[100] = {0};
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    printf("Array: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nFollowing elements are occurring more than once: ");
    for(int i = 0; i < 100; i++) {
        if (freq[i] > 1) { 
            printf("%d ", i);
        }
    }  
    printf("\n");
}