#include <stdio.h>
#include<stdlib.h>

int emon(int arr[], int l, int h, int t){
    while (l<=h)
    {
        int mid= l+(h-l)/2;
        if(arr[mid]==t)
            return mid;
            if(arr[mid]<t)
            l=mid+1;
            else
            h=mid-1;
        
    }
    return -1;
    

}
int main() {
    int n, q;
    scanf("%d", &n);
    scanf("%d", &q);
    int arr[n];
    for(int i=0; i<n; i++)
      scanf("%d", arr[i]);
      for(int i=0; i<q; i++){
        int e;
        scanf("%d", &e);
        int position=emon(arr, 0,n-1, e);
        if(position !=1)
        printf("%d\n", position);
        else
        printf("Not found");
      }
      return 0;
}






//   int n; 
//    int arr[]={30,45,30};
//    for(int i=1; i<3; i++){
//     int value =arr[i];
//     int index=i;
//     while (index>0 &&  arr[index-1]>value)
//     {
//         arr[index]=arr[index-1];
//         index--;
//     }
//     arr[index]=value;
    
//    }
//    for(int i=0; i<3; i++){
//     printf("%d\n", arr[i]);
//    }
//    int res1=(arr[0]+arr[1]-arr[2])/2;
//     int res2=arr[0]-res1;
//     int res3=arr[1]-res1;
//     printf("%d %d %d\n", res1, res2, res3);