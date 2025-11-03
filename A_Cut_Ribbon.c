#include<stdio.h>
int cmp(const void *x,const void *y)
   {
     return *(int *)x-*(int *)y;
   }
int main()
{
    int n;
    scanf("%d",&n);

    int rib[3];
    for(int i=0;i<3;i++)
       {
         scanf("%d",&rib[i]);
         
       }

    qsort(rib,3,sizeof(int),cmp); 
    
    int count=0;
    for(int i=0;i<3;i++)
       {
         int length=n;
         
         int j=length/rib[i];

         if(length%rib[i]==0)
             {
                count+=j;
                break;
             }

        else
             {
                while(j--)
                  {
                     if(((n-rib[i]*j)%rib[i+1])==0)
                       {
                        count=count+j+((n-rib[i]*j)/rib[i+1]);
                        break;
                       }

                     if(((n-rib[i]*j)%rib[i+2])==0)
                       {
                        count=count+j+((n-rib[i]*j)/rib[i+2]);
                        break;
                       }  

                       
                       


                  }

             }
        
       }


}