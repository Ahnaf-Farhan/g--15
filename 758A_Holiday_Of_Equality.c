#include<stdio.h>
int cmp(const void *x,const void *y)
    {
        return *(int *)x-*(int *)y;
    }
int main()
{
    int t;
    scanf("%d",&t);

    int burle[t];
    for(int i=0;i<t;i++)
        {
            scanf("%d",&burle[i]);
            
        }

    qsort(burle,t,sizeof(int),cmp);  
    
    
     int count=0;
     for(int i=0;i<t-1;i++)
        {
          count+=burle[t-1]-burle[i];
        }
        
    printf("%d",count);    

}