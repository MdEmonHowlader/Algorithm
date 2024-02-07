#include <stdio.h>
int main(){
    int n;
    int e=0;
int m=0;
int le=0;
int lo=0;
scanf("%d", &n);
for(int i=1; i<=n; i++){
    int number;
    scanf("%d", &number);
    if(number %2==0){
        e++;
        le=i;

    }else{
        m++;
        lo=i;
    }

}
 printf("%d", (e==1  ? le : lo));

}