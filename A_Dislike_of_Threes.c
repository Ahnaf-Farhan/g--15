#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int i=1;
    int count=0;
    while(1)
        {
            if(count==t)
              break;

            if(i%3==0 || i%10==3)
              {
                i++;
                continue;
              }
              
            else 
              {
                 printf("%d\n",i); 
                 i++;
                 count++;
              } 


              
               
        }
}