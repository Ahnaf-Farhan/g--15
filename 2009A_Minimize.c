#include<stdio.h>
int cmp(const void *x,const void *y)
    {
        return *(int *)x-*(int *)y;
    }
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
       {
         int a,b;
         scanf("%d %d",&a,&b);

         int arr[b-a+1];
  
         int k=0;
         for(int j=a;j<=b;j++)
            {              
                arr[k++]=(j-a)+(b-j);
            }

        qsort(arr,b-a+1,sizeof(int),cmp);    

        printf("%d\n",arr[0]);
       }
}