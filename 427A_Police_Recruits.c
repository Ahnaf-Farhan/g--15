#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    long long*pol=malloc(n*sizeof(long long));

    for(long long i=0;i<n;i++)
       {
         scanf("%lld",&pol[i]);
       }

     for(long long i=0;i<n;i++)
       {
         long long j=i;
         if(pol[j]>0)
           {
             j+=1;
             while(pol[i]!=0)
                {
                    if(j==n)
                      {break;}

                    if(pol[j]==-1)
                    {
                        pol[i]-=1;
                        pol[j]=0;
                   }
                  j++;  
                      
                }  

           }  
        }  
     
    int count=0;    
    for(long long i=0;i<n;i++)
       {
         if(pol[i]==-1)
           count++;
       }
       
    printf("%d\n",count);   

    free(pol);
}




// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     long long n;
//     scanf("%lld", &n);
//     long long*pol=malloc(n*sizeof(long long));

//     for(long long i=0;i<n;i++)
//        {
//          scanf("%lld",&pol[i]);
//        }

//     long long police = 0, untreated = 0;
//     for(long long i=0;i<n;i++)
//     {
//        if(pol[i] == -1)
//         {
//             if(police > 0)
//                 police--;
//             else
//                 untreated++;
//         }
//       else
//         {
//             police += pol[i];
//         }
//     }

//     printf("%lld\n", untreated);

//     free(pol);
// }