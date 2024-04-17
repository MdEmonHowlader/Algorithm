#include<stdio.h>
int binary_search(int arr[], int n, int target){
    int left=0, right=n-1;
    while (left <= right)
    {
        int mid= left +(right-left)/2;
        if(arr[mid] == target)
        return mid;
        else if(arr[mid]<target)
        left=mid+1;
        else 
        right=mid-1;
    }
    return -1;
}
void find_positions(int arr[], int n, int queries[], int q){
    for(int i=0; i<q; i++){
        int index =binary_search(arr, n, queries[i]);
        if(index != -1)
        printf("%d\n", index);
        else
        printf("Not Found\n");
    }
}
int main(){
    int N, Q;
    scanf("%d %d", &N, &Q);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    int queries[Q];
    for(int i=0; i<Q; i++){
        scanf("%d", &queries[i]);
    }
    find_positions(arr, N, queries, Q); 
    return 0;
}