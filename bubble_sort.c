#include<stdio.h>
int main(){
    int a[0];
    int b;
    scanf("%d", &b);
    for(int i=1; i<b; i++){
        for(int j=1; j<(b-1); j++){
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