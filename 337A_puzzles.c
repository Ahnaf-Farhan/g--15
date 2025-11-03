#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d %d",&x,&n);

    int gf[n];
    for(int i=0;i<n;i++)
       {
         scanf("%d",&gf[i]);
       }

    for(int i=0;i<n-1;i++)     //sort
       {
         for(int j=0;j<n-1;j++)
           {
              if(gf[j]>gf[j+1])
                {
                    int temp=gf[j];
                    gf[j]=gf[j+1];
                    gf[j+1]=temp;
                }
           }
       }
       
          
// প্রতিটি n consecutive segment এর মধ্যে max - min বের করে দেখতে হবে কোনটার value ছোট।      
       int def[n-x+1];       //size= right theke shb element nibo,until last er segment ashe,nd last er segment theke jst akta element nibo
       int k=0;                               //shb deffrence akta array te rakhar index maintain
       for(int i=0;i<=((n-1)-(x-1));i+=1)             //(n-1)last index,tai condition last segment er first elements prjntw anbo
          {
            def[k]=gf[i+(x-1)]-gf[i];                        //shb segemnt er diffrence
            k++;
          }
   
       int min=def[0];
       for(int i=0;i<n-x+1;i++)
          {
            if(min>def[i])              //minimun difference
              min=def[i];
          }
        
        printf("%d\n",min);  
}



          //max.min ber krar mtn trick:qge e akta diff dhre nibo

// int ans = a[n-1] - a[0];                  // প্রথম n টার মধ্যে পার্থক্য
//     for (int i = 1; i + n - 1 < m; i++) 
//.    {
//         int diff = a[i+n-1] - a[i];
//         if (diff < ans) ans = diff;         //
//     }