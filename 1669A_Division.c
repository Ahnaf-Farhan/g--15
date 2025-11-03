#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
       {
         int x;
         scanf("%d",&x);

         if(x>=1900)
           printf("Division %d\n",1);
         else if(x>=1600 && x<=1899)
           printf("Division %d\n",2);
         else if(x>=1400 && x<=1599)
           printf("Division %d\n",3);
         else
           printf("Division %d\n",4);       
       }
}