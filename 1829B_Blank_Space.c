#include<stdio.h>
int cmp(void const *x,void const *y)
    {
        return *(int *)x-*(int *)y;
    }
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
       {
         int n;
         scanf("%d",&n);

         int bin[n];
         int blank[n];
         for(int i=0;i<n;i++)
            {
                scanf("%d",&bin[i]);
                blank[i]=0;
            }

         int j=0;
         for(int i=0;i<n;i++)
            {
                if(bin[i]==0)
                     blank[j]+=1;
                else
                     j+=1;
            }
           
          qsort(blank,n,sizeof(int),cmp);  
          printf("%d\n",blank[n-1]);
       }
}