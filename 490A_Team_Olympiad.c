#include<stdio.h>
int cmp(void const *x,void const *y)
   {
     return *(int *)x-*(int *)y;
   }
int main()
{
    int n;
    scanf("%d",&n);

    int tm[n];
    for(int i=0;i<n;i++)      
         scanf("%d",&tm[i]);
    
    int count[3]={0};     
    for(int i=0;i<n;i++)
        {
            if(tm[i]==1)
              count[0]+=1;
            else if(tm[i]==2)
              count[1]+=1;
            else
              count[2]+=1;    
        } 
    
    qsort(count,3,sizeof(int),cmp);    
    printf("%d",count[0]);

    printf("\n");

    if(count[0]>=1)
    {       
        for(int i=1;i<=count[0];i++)
        {
           
                for(int i=0;i<n;i++)
               {
                 if(tm[i]==1)
                    {
                        printf("%d ",i+1);
                        tm[i]=0;
                        break;
                    }
                   
               }


                 for(int i=0;i<n;i++)
               {
                 if(tm[i]==2)
                    {
                        printf("%d ",i+1);
                        tm[i]=0;
                        break;
                    }
                   
               }


                 for(int i=0;i<n;i++)
               {
                 if(tm[i]==3)
                    {
                        printf("%d ",i+1);
                        tm[i]=0;
                        break;
                    }
                }   
            
            printf("\n");
            
        }
    }
   
       
       
}