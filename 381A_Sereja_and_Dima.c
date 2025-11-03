#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int card[n];

    for(int i=0;i<n;i++)
       {
         scanf("%d",&card[i]);
       }

    int l=0,r=n-1;
    int sereja=0,dima=0;   
    for(int i=0;i<n;i++)
       { 
         if((i+1)%2 !=0)
            {
                if(card[l]>card[r])
                  {
                    sereja+=card[l];
                    l+=1;
                  }
                else
                  {
                    sereja+=card[r];
                    r-=1;
                  }    
            }



         else
            {
               if(card[l]>card[r])
                  {
                    dima+=card[l];
                    l+=1;
                  }
                else
                  {
                    dima+=card[r];
                    r-=1;
                  }     
            }
        }        

    printf("%d %d",sereja,dima);        


          

}