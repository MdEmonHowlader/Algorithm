#include <stdio.h> 
int main() {
   int n; 
   int arr[]={10,5,8,6,7};
   for(int i=1; i<5; i++){
    int value =arr[i];
    int index=i;
    while (index>0 &&  arr[index-1]>value)
    {
        arr[index]=arr[index-1];
        index--;
    }
    arr[index]=value;
    
   }
   for(int i=0; i<5; i++){
    printf("%d\n", arr[i]);
   }
   
  
}