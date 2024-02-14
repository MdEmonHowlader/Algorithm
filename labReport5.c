//1. Ibrahim is passionate about football and has dedicated much of his time to watching games.

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int h, a;
   int e[n][2];
   for (int i=0; i<n; i++){
    scanf("%d %d", &e[i][0], &e[i][1]);

   }
    int count=0;
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++)
        {
            if(i!=j){
                h=e[i][0];
                a=e[j][1];
                 if(h==a){
            count++;
           }
            }
          
        }
        
    }
    printf("%d\n", count);
}