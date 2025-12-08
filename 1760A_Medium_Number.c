#include<stdio.h>
int cmp(const void *x,const void *y)
   {
     return *(int *)x-*(int *)y;
   }
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

       qsort(arr,3,sizeof(int),cmp);

       printf("%d\n",arr[1]);
    }
   
}