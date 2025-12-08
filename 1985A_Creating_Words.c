#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
       {
         char arr1[4],arr2[4];

         scanf("%s %s",arr1,arr2);

         char ch=arr1[0];
         arr1[0]=arr2[0];
         arr2[0]=ch;

         printf("%s %s\n",arr1,arr2);
         
       }
}