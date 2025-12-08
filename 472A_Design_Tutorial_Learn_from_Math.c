#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=4;i<n;i++)
       {
         int count=0;
         int flag=0;
          for(int j=2;j*j<=i;j++)
             {
                 if(i%j==0)
                   count++;
                  
                 if(count>=1 )
                  {
                    flag=1;
                    break;
                  }
                     
             }


           if(flag)
             {
                count=0;
                flag=0;
                int x=n;
                x-=i;
                
                for(int j=2;j*j<=x;j++)
                {
                  if(x%j==0)
                    count++;
                  
                  if(count>=1 )
                   {
                     flag=1;
                     break;
                   }
                     
                }

               if(flag) 
                 {
                    printf("%d %d",i,x);
                    return 0;
                 }   

             }  
       }
}