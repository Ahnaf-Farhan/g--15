#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
       {
         int a,b,c,d;
         scanf("%d %d %d %d",&a,&b,&c,&d);

         int count=0;
         if(a<b)
           count+=1;
         if(a<c)
           count+=1;
         if(a<d)
           count+=1;
           
        printf("%d\n",count);   

       }
}