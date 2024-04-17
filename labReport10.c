#include <stdio.h>
int bubble(int n, int k, int c[]){
      int t = 0;
    int sum = 0;
    for (int i = 0; i < n-1; i++) {
        for(int j=0; j<k-i-1; j++){
              if (sum + c[j] <= k) {
            t++;
            sum += c[j];
            
        } else {
            break; 
        }

        }
    }
    return t;

}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int c[n];
  
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }
   
    printf("%d\n", bubble(n, k, c));

    return 0;
}