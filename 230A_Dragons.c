#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d %d",&x,&n);

    int drag[n][2];
    for(int i=0;i<n;i++)
       {
         for(int j=0;j<2;j++)
            {
                scanf("%d",&drag[i][j]);
            }
       }

     
     for(int i=0;i<n-1;i++)                  //bubble sort to kill weak dragon first
       {
         for(int j=0;j<n-i-1;j++)
            {
                if(drag[j][0]>drag[j+1][0])
                   {
                     int temp0=drag[j][0];     //1st element niche swap                     
                     drag[j][0]=drag[j+1][0];                     
                     drag[j+1][0]=temp0;

                     int temp1=drag[j][1];    //2nd elemnet niche swap
                     drag[j][1]=drag[j+1][1];
                     drag[j+1][1]=temp1;
                   }
            }  
       }     

    for(int i=0;i<n;i++)
       {
         if(x>drag[i][0])
           x+=drag[i][1];        //power gain
         else
           {
            printf("NO");
            return 0;
           }
       }  
       
    printf("YES");   
}