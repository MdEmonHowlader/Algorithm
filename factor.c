#include<stdio.h>
int main(){
    int i , fact=1, n;
    printf("Enter Your Factor Number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fact = fact*i;
    }
    printf("Result: %d\n", fact);
}