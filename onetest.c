#include<stdio.h>
 int main(){
    int n[5]={23,45,67,89,22};
    int a;
    int b=0;
    scanf("%d", &a);
     for(int i=0; i<=5; i++){
      printf("%d\n", n[i]);
      if(n[i]==a){
        b=1;
        break;
      }
     } if(b){
         printf("Found");
      }else{
         printf("Not Found");
      } 
 }