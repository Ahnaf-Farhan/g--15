#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
       {
         int arr[3];
         for(int i=0;i<3;i++)
            scanf("%d",&arr[i]);

         if(arr[0]+arr[1]>=10)
           {
            printf("%s\n","YES");
            continue;
           }   
         else if(arr[0]+arr[2]>=10)
           {
            printf("%s\n","YES");
            continue;
           }  
         else if(arr[1]+arr[2]>=10)
           {
            printf("%s\n","YES");
            continue;
           } 
         else
           printf("%s\n","NO");         
       }
}