#include<stdio.h>
#include<math.h>

int bacteria(int x)
   {  
    if (x == 0)
        return 0;

    int n=(int)floor( log(x)/log(2) + 1e-12 );

    int ans=x-(int)pow(2,n);

        return 1 + bacteria(ans);

   }

int main()
{
    int x;
    scanf(" %d",&x);
    
    int days=bacteria(x);

    printf("%d\n",days);
    
    

}