#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int arr[3];
    while(t--)
        {
           for(int i=0;i<3;i++)
           {
             scanf("%d",&arr[i]);
           } 

           if(arr[0]!=arr[1]&&arr[0]!=arr[2])
             printf("%d\n",arr[0]);

           else if(arr[1]!=arr[0]&&arr[1]!=arr[2])  
              printf("%d\n",arr[1]);
           else
              printf("%d\n",arr[2]);   
        }
}