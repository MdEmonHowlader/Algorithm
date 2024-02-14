// Mozid Introduced an interesting game to his classmates of 63_Q.
#include <stdio.h>
int main(){
  int n, k, s, count=0;
  scanf("%d %d", &n, &k);
int se[n];
for(int i=0; i<n; i++){
    scanf("%d", &se[i]);
}
s=se[k-1];
for(int i=0; i<n; i++){
    if(se[i]>=s && se[i]>0){
        count++;
    }else{
        break;
    }
}
printf("%d\n", count);

}