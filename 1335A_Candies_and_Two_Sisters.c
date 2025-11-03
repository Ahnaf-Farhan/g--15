#include<stdio.h>
#include<stdlib.h> 
int main()
{
    long long n;
    scanf("%lld",&n);

    int *candy=malloc(n*sizeof(int));
    for(long long i=0;i<n;i++)
       {
           scanf("%d", &candy[i]);
       }

    for(long long i=0;i<n;i++)
       {
         if(candy[i]%2==0)
            {
              candy[i]=(candy[i]/2)-1;
            }
         else
            {
                candy[i]=(candy[i]/2);
            }   
       }      

    for(long long i=0;i<n;i++)
       {
        printf("%d\n",candy[i]);
       }    
}