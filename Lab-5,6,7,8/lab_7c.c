#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b){
    return (*(int *)a - *(int *)b);

}
int main(){
    int n, m;
    scanf("%d",&n);
    scanf("%d",&m);
    int puzzles[m];
    for(int i=0; i<m; i++){
        scanf("%d",&puzzles[i]);
    
}
qsort(puzzles, m, sizeof(int), compare);
int min=puzzles[n-1]-puzzles[0];
for(int i=1; i<=m-n; i++){
    int diff=puzzles[i+n-1]-puzzles[i];
    if(diff<min){
        min=diff;
    } 
}
printf("%d\n",min);
}