#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int cont=0;
   for(int i=0; i<n; i++){
    if (a[i]==1)
    {
        cont++;
    }
   }
   if(cont>=(n/2)+1){
    printf("Changed");
   }else{
    printf("Remains");
   }

}