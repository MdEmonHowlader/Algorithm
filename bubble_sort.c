#include<stdio.h>
int main(){
    int a[]={3,13,4,10,6,2,7,9,0,8,78};
    int b=10;
    for(int i=0; i<b; i++){
        for(int j=0; j<(b-1); j++){
          if(a[j]>a[j+1]){
              int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }

        }
    }
    for(int i=0; i<=b; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}