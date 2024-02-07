#include<stdio.h>
#include <stdlib.h>
int main(){
int n;

scanf("%d", &n);
for ( int i=1; i<=n; i++){
    int myp, lift;
    scanf("%d %d", &myp, &lift);
    int ti=(abs(myp-lift)*4)+19+myp*4;
    printf("Case %d: %d\n",i, ti);
}
return 0;

}