#include<stdio.h>
int main()
{
    long long n,m;
    scanf("%lld %lld",&n,&m);

    long long prev=1;               //3 ta variable r use dekhe nish
    long long now;
    long long count=0;

    for(long long i=1;i<=m;i++)
       {
         scanf("%lld",&now);

         if(now>=prev)                //forword condition
           {
            count+=(now-prev);             //
           }
          else                        //fulll cycle->backward condition
           {
             count+=(n-prev)+now;          //
           }   

        prev=now;              //....//
       }

    printf("%lld\n",count);   
}