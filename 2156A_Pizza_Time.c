#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
       {
         long long hao=0;
         long long x;
         scanf("%lld",&x);

         for(long long j=1;x>0;j++)
          {
            if (x % 3 == 2) 
               break;

             hao+=x/3;
             x=(x-hao)-(x-hao)/2;
          }

        printf("%lld\n",hao); 
        } 


       
}