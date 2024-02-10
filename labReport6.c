#include <stdio.h>
int main(){
    int n, k;
    int count=0;
    scanf("%d %d", &n, &k);
   int e[n];
   int ks=e[k-1];
   for (int i=0; i<n; i++){
    scanf("%d ", &e[i]);
   }
   for(int i=0; i<n; i++){
    if(e[i]>=ks && e[i]>0){
        count++;
    }
   }

   
  
   printf("%d\n", count);
    

}