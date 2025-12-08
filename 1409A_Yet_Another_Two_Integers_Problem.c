#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long n;
    scanf("%lld",&n);

    for(int i=1;i<=n;i++)
       {
         long long a,b;
         long long count=0;
         scanf("%lld %lld",&a,&b);

         long long diff=llabs(a-b);      //main fact,ata diye e shb hishab
         if(diff>=10)
           {
             count=diff/10;       //
             
           }


        if (diff % 10 != 0)            /////main trick
           {
             count+=1;
           }
           

         printf("%lld\n",count);   
       }
}