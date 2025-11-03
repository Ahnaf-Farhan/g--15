#include<stdio.h>
#include<stdlib.h>
int compare(const void *x,const void *y)
    {
        return *(int *)x-*(int*)y;
    }

int drink(int *shop,int n,int x)                    //binary search diye complexity komabo
    {
       int l=0,r=n;
       while(l<r)
            {
                int mid=(l+r)/2;

                if(shop[mid]<=x)             //reltn gulo dekh
                   l=mid+1;
                else
                    r=mid;   
            }

     return l;                             //     
    }  

int main()
{
    int n;
    scanf("%d",&n);

    int *shop = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &shop[i]);

        
    qsort(shop,n,sizeof(int),compare);               //qsort diye sort krbo,comparison kom krte


    int q;
    scanf("%d",&q);
    int *cur=malloc(q*sizeof(int));
    for(int i=0;i<q;i++)
       {
         scanf("%d",&cur[i]);
       }


    for(int i=0;i<q;i++)
       {   
          
        printf("%d\n",drink(shop,n,cur[i]));   

       } 

    free(shop);   
    free(cur);   
}