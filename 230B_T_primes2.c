#include<stdio.h>
#include<stdlib.h>
int main()
{
  long long n;
  scanf("%lld",&n); 
  long long *prime=malloc(n*sizeof(long long));
  for(long long i=0;i<n;i++)
     {
       scanf("%lld",&prime[i]);
     }

  for(long long i=0;i<n;i++)
     {
       int count=0;
       for(long long j=1;j*j<=prime[i];j++)
          {
            if(prime[i]%j==0)
                if(j * j == prime[i])
                    count += 1;
                else
                    count += 2;
            
          }  
                if(count==3)
                   printf("%s","YES\n");

                else
                  printf("%s","NO\n");   
                           
          }
}


