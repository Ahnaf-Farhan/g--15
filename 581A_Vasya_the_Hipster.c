#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int different_shock=(a<b)?a:b;

    int same_shocks=(a>b)?a:b;
    
    printf("%d %d\n",different_shock,(same_shocks-different_shock)/2);

}