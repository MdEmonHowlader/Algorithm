#include<stdio.h>
int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return -1;
    }
    int comparisons = 0;
    for(int i=0; i<n-1; i++){
        int swapped =0;
        for(int j=0; j<n-i-1; j++){
            comparisons++;
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped =1;
            }
            if(swapped>=9){
                return arr[n-2];
            }

        }
        if(!swapped){
            break;
        }
    }
    return arr[n-2];
    
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[10];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int emon=findSecondLargest(arr, n);
    printf("%d\n", emon);
}