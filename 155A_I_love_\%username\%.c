#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int cf[n+1];
    for(int i=0;i<n;i++)
        {
            scanf("%d",&cf[i]);
        }


    //edge case//
    if(n == 1)
    {   
        printf("0\n");
        return 0;
    }   
    
    
    int min,max;

    int count=0; 

    if(cf[0]<cf[1])
      {
         min=cf[0];
         max=cf[1];
         count=1;
      }
    else if(cf[0]>cf[1])
      {
        min=cf[1];
        max=cf[0];
        count=1;
      }
    else
      {
        min=max=cf[0];               //edge case
        count=0;
      }    


    for(int i=2;i<n;i++)
      {
         if(max<cf[i])
            {
                count++;
                max=cf[i];
            }    

         else if(min>cf[i])
            {
                count++;
                min=cf[i];
            }    
            
         else
            continue;   
      }
       
    printf("%d",count);  
}




    // int min = cf[0];                 //min max duta e first element dhrse
    // int max = cf[0];
    // int count = 0;                   //

    // for (int i = 1; i < n; i++)             //looping i=1 theke
    //  {
    //     if (cf[i] > max) 
    //       {
    //         count++;
    //         max = cf[i];
    //       } 
    //     else if (cf[i] < min) 
    //       {
    //         count++;
    //         min = cf[i];
    //       }
    //  }