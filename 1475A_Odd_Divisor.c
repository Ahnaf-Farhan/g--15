#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

  while(n--)
  { 
    long long x;
    scanf("%lld",&x);

    while(x%2==0)
         {
            x/=2;
         }

    if(x>1)
      printf("YES\n");
    else
      printf("NO\n");
  }    
}    

        