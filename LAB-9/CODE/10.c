#include <stdio.h>
int maxNum(int arr[], int k) {
    int max = arr[0];
    for(int i=1; i<k; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int minNum(int arr[], int k) {
    int min = arr[0];
    for(int i=1; i<k; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
void main() {
    int k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &k);
    int arr[k];
    for(int i=0; i<k; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nMaximum Number in the Array: %d", maxNum(arr, k));
    printf("\nMinumum Number in the Array: %d", minNum(arr, k));
}