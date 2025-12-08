#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
       {
         int x;
         scanf("%d",&x);

         int l;
         int r;
          
         r=x%10;              //
         l=x/=10;              //
           
         printf("%d\n",r+l);
       }
}