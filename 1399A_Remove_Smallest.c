#include<stdio.h>
int cmp(const void *x,const void *y)
    {
         long long a = *(const  long long *)x;
         long long b = *(const  long long *)y;

    if(a < b) 
       return -1;
    if(a > b) 
       return 1;

    return 0;
    }
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        if(n==1)
          printf("%s\n","YES");

        else
      {  
        int arr[100];
        for(int i=0;i<n;i++)
           {
             scanf("%d",&arr[i]);
           }

           
        qsort(arr,n,sizeof(int),cmp); 
        

          int flag=1;
         for(int i=0;i<n-1;i++)
           {
             if(arr[i+1]-arr[i]>1)
               {
                flag=0;
                break;
               }
           }    
            
         if(flag) 
             printf("YES\n");
         else     
             printf("NO\n");
      }
    }
}