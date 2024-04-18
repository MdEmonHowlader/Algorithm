#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int sums[4];
    printf("Enter the four numbers: ");
    scanf("%d %d %d %d", &sums[0], &sums[1], &sums[2], &sums[3]);
    bubbleSort(sums, 4);
    int quiz1 = sums[3] - sums[0];
    int quiz2 = sums[3] - sums[1];
    int quiz3 = sums[3] - sums[2];

    printf("Quiz 1: %d\n", quiz1);
    printf("Quiz 2: %d\n", quiz2);
    printf("Quiz 3: %d\n", quiz3);

    return 0;
}