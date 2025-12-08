#include<stdio.h>
#include<string.h>
int main()
{
    char bor[201];
    scanf("%s",bor);

    int n=strlen(bor);
    for(int i=0;i<n;)
       {
         if(bor[i]=='.')
           {
             printf("0");
             i++;
           }

          else if (bor[i]=='-')
            {
                if(bor[i+1]=='.')
                  printf("1");
                 
                else
                  printf("2");
                  
             i+=2;     
            } 
  
       }   
}