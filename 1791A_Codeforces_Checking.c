#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    char arr[11]="codeforces";
    while(t--)
       {
         char x;
         scanf(" %c",&x);

          int flag=1;
         for(int i=0;i<10;i++)
           {            
             if(x==arr[i])
               {
                 flag=0;
                 printf("YES\n");
                 break;
               }
           }

           if(flag)
           printf("NO\n");

       }
}