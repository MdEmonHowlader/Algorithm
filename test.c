#include<stdio.h>

int emon(int n){
    if(n==1 || n==2){
        return n; 
    }else {
        int a=1, b=2, temp;
        for(int i=3; i<=n; ++i){
           temp = a*b;

            a=b;
            b=temp;
        }
     return  temp;
    }
}
int main(){
    int n; 
    printf("Enter number: ");
    scanf("%d", &n);
    int e=emon(n);
    printf("%d\n", e);

}