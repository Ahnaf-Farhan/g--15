#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)                          //ak loop e e,input output shb hbe
       {
         char yn[10];
         scanf("%s",yn);

         for (int i = 0; yn[i]; i++)      //condition ta bhalo trick,string er sesh e '\0',ashle logical false hbe condition
            yn[i] = toupper(yn[i]);

            
         if(strcmp(yn,"YES")==0)         //string comparison
            printf("YES\n");
         else
            printf("NO\n");   
       } 

   
}