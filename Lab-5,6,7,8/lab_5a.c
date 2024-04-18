#include <stdio.h>
int findSecondLargest(int arr[], int n) {
    int i, j, max, secondMax;
    max = arr[0]; 
    secondMax = -1; 

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] < max && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }
    return secondMax;
}
int main() {
    int n, i;
    
    scanf("%d", &n);
    int arr[n];
    
   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int secondLargest = findSecondLargest(arr, n);
    printf("The second largest element is: %d\n", secondLargest);
    return 0;
}
