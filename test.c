#include <stdio.h> 
int main() {
   int n; 
   int arr[]={30,45,30};
   for(int i=1; i<3; i++){
    int value =arr[i];
    int index=i;
    while (index>0 &&  arr[index-1]>value)
    {
        arr[index]=arr[index-1];
        index--;
    }
    arr[index]=value;
    
   }
   for(int i=0; i<3; i++){
    printf("%d\n", arr[i]);
   }
   int res1=(arr[0]+arr[1]-arr[2])/2;
    int res2=arr[0]-res1;
    int res3=arr[1]-res1;
    printf("%d %d %d\n", res1, res2, res3);
   
  
}

