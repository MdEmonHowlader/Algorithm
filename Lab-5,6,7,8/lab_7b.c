#include<stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int h, m, s;
        scanf("%d %d %d",&h , &m ,&s);
        if(h+m+s>=2){
            count++;
        }
    }
    printf("%d\n", count);
}