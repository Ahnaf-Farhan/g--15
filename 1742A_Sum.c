#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int sum[n][3];
    for(int i=0;i<n;i++)
       {
         for(int j=0;j<3;j++)
            {
                scanf("%d",&sum[i][j]);
            }
       }

    for(int i=0;i<n;i++)
    {
         int max=sum[i][0];
          for(int j=0;j<3;j++)
            { 
                if(max<sum[i][j])                   
                    max=sum[i][j];                        
            }
           
          for(int k=0;k<3;k++)
            {  
              if(max==sum[i][k])
                {
                    sum[i][k]=0;
                    break;
                }  
            }
        
        if(max==sum[i][0]+sum[i][1]+sum[i][2])
           printf("YES");
        else  
           printf("NO");
           
          printf("\n");
          
    }     

}



//direct processing

// int main() {
//     int t;
//     scanf("%d", &t);

//     while (t--) 
//    {
//         int a, b, c;
//         scanf("%d %d %d", &a, &b, &c);                      //

//         if (a + b == c || a + c == b || b + c == a)          //akbare
//             printf("YES\n");
//         else
//             printf("NO\n");
//     }

//     return 0;
// }