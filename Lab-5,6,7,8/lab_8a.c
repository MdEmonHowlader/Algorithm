#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);


    while (t--)
    {
       int n, k;
       scanf("%d", &n);
       scanf("%d", &k);
        int total =n;
        int butts=n;
        while (butts>=k)
        {
           int new=butts/k;
           total+=new;
           butts=new+(butts%k);
        }
        printf("%d\n", total);
        
    }
    
}