#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b){
    return (*(int *)a - *(int *)b);

}

int main(){
       int n, m;
    scanf("%d %d", &n, &m);

    int prices[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    qsort(prices, n, sizeof(int), compare);
    int sum = 0;
    for (int i = 0; i < m; i++) {
        if (prices[i] < 0) {
            sum -= prices[i];
        }
    }
    printf("%d\n", sum);
    return 0;
    
}