#include <stdio.h> 
int main() {
    int n; 
    scanf("%d", &n);

    int  a[n], b[n-1], c[n-2];
    int sum1=0, sum2=0, sum3=0;
    int count1, count2;


    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        sum1 += a[i];
    }
    for(int i=0; i<n-1; i++){
        scanf("%d", &b[i]);
        sum2 += b[i];
    }
    for(int i=0; i<n-2; i++){
        scanf("%d", &c[i]);
        sum3+=c[i];
    }
    count1=sum1-sum2;
    count2=sum2-sum3;

    printf("%d %d\n", count1, count2);
}

