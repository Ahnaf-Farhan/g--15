#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long *num=malloc(4*sizeof(long long));
    for(int i=0;i<4;i++)
       {
         scanf("%lld",&num[i]);
       }

    long long max=num[0];
    for(int i=0;i<4;i++)
       {
         if(max<num[i])
            max=num[i];
       }
       
    for(int i=0;i<4;i++)
       {
         int digit=max-num[i];
         
         if(digit==0)
           continue;
           
         printf("%d ",digit);
       }    
           

}