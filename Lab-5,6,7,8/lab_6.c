#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(){
    int a;
    scanf("%d", &a);
    int num[a];
    for(int i=0; i<a; i++){
        scanf("%d", &num[i]);
    }
    qsort(num, a, sizeof(int), compare);
    int sum=0;
    for(int i=0; i<a; i+=2){
        sum+=num[i];
    }
    printf("%d\n", sum);
}