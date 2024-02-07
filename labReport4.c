#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    while (a--)
    {
       
       long long b, c;
       scanf("%lld", &b);
       scanf("%lld", &c);
       long long d=0;
       while (b>0)
       {
        if(b % c==0){
            b/=c;
        }else{
            b--;
        }
        d++;
       }
       printf("%lld\n", d);
       
    }
    

}