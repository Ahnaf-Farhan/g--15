#include<stdio.h>
int main()
{
    int k,r;
    scanf("%d %d",&k,&r);

    int x=1;
    while((((k*x)-r)%10!=0) && (k*x)%10!=0)      //&& hbe.|| hbe nh
        x++;

    printf("%d\n",x);    
}