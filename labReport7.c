// Error
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int e1[n+1];
    int e2[n];
    int e[n-1];
    for(int i=1; i<n; i++){
        scanf("%d", &e1[i]);
    }
    for(int i=1; i<n; i++){
        scanf("%d", &e2[i]);
    }
    for(int i=1; i<n; i++){
        scanf("%d", &e[i]);
    }
    int a=0;
    for(int i=1; i<n; i++){
        int b1=0;
        int b2=0;
        for(int j=1; i<n; j++){
            if(e1[i]==e2[j]){
                b1=1;
            }
        }
        for(int j=1; j<n-1; j++){
            if(e1[i]==e[j]){
                b2=1;
            }
        }
        if(!b1&&b2){
            a=e1[i];
            break;
        }
    }
    int a2=0;
    for(int i=1; i<n; i++){
        int c1=0;
        int c2=0;
        for(int j=1; j<n-1; j++){
            if(e2[i]==e[j]){
                c1=1;
            }
        }
        for(int j=1; j<n-2; j++){
            if(e2[i]==e[j]){
                c2=1;
            }
        }
        if(!c1 && c2){
            a2=e2[i];
            break;
        }
    }
    printf("%d %d\n", a, a2);
}