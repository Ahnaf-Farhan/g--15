#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
        {
            int n;
            scanf("%d",&n);

            int arr[n];
            for(int i=0;i<n;i++)
               {
                 scanf("%d",&arr[i]);
               }

            int same;   
            if(arr[0]!=arr[1] && arr[0]!=arr[2])        //main part equal elemnt ek ber kra 
               {
                same =arr[1];                                //randon arr[1],arr[2] jekno akta
                printf("1\n");
                continue ;
               } 

            else
              {
                   same =arr[0];                                 //
              }    
                  
           
         for(int i=0;i<n;i++)
               { 
                if(same!=arr[i])
                  {
                    printf("%d\n",i+1);
                    break;
                  }

               }   
                       
        }
}



        // int same;
        // if(arr[0] == arr[1] || arr[0] == arr[2])
        //     same = arr[0];
        // else
        //     same = arr[1];