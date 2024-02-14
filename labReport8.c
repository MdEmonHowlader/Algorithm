// Omim has got three quiz marks.

#include<stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int res1=(a+b-d)/2;
    int res2=a-res1;
    int res3=b-res1;
    printf("%d %d %d\n", res1, res2, res3);
    
}