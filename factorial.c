  #include <stdio.h>
    int  foo(int n){
        if(n==0){
            return 1;
        }else{
            return n*foo(n-1);
        }
    }
    int main(){
        int n;
        scanf("%d", &n);

        if(n<0){
            printf("Error : Factorial is not a negtaive number.\n");
            return 1;
        }
        int resetl= foo(n);
        printf("Factorial of %d is %d\n", n, resetl);
        return 0;   
    
    }