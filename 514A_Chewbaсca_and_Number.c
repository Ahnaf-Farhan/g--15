#include<stdio.h>
void fun(long long n)
     {
        if(n==0)            
          return;

        int digit = n % 10;

          fun(n/10);

        if(digit>9-digit)
          digit=9-digit;
        
        if(n<10 && digit==0)
          digit=9;     
  
         printf("%d",digit);

     }
int main()
{
    long long n;
    scanf("%lld",&n);

    fun(n);
}


// ❌ Wrong:

// digit invert → recursion → print

// ✔ Correct:

// recursion → digit invert → print