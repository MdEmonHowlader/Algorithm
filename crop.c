#include<stdio.h>
int main(){
    int E;
    scanf("%d", &E);
    while (E--)
    {
        int T;
        scanf("'%d", &T);
        char field[T+1];
        scanf("%s", field);
        int crow=0;
        for ( int i=0; i<T; i++)
        {
            if (field[i]=='.')
            {
               crow++;
               i+=2;
            }
        
        }
        printf("%d\n", crow);
    }
    return 0;
   
  
    
}