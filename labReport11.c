#include <stdio.h>
int main() {
    int n, p;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int m, h, s;
        scanf("%d", &m);
        scanf("%d", &h);
        scanf("%d", &s);
        if(m+h+s>=2){
            p++;
        }

    }
    printf("%d\n", p);

  
}