#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
       { 
          char str[4];
         scanf("%s",str);

         if(str[0]=='a'||str[1]=='b'||str[2]=='c')
           printf("%s\n","YES");
         else
           printf("%s\n","NO");  
       }
}