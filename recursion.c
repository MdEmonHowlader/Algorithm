#include <stdio.h>
int main(){
    int rec=fact(5);
    printf("%d\n", rec);
}
int fact(int n){
    if(n==1)
    return 1;
    else
    return n*fact(n-1);

}