//tle khacce//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    long long n;
    scanf("%lld",&n);

    int *taxi=malloc(n*sizeof(int));
    for(long long i=0;i<n;i++)
       {
         scanf("%d",&taxi[i]);
       }

    long long *ptr=&n;
    for(long long i=0;i<n-1;i++)
       {
          for(long long j=i+1;j<n;j++)
             {
                if(taxi[i]<taxi[j])
                   {
                     int temp=taxi[i];
                     taxi[i]=taxi[j];
                     taxi[j]=temp;
                   }
             }
       }
    


     int count=0;
    for(int i=0;i<n;i++)
       { 
         if(taxi[i]==4)
           {
            count+=1;
            continue;
           }
        
    else if(taxi[i] == 2 && i+1 < n && taxi[i+1] == 2)
    {
        count += 1;
        i++; // skip the next 2 because we paired it
        continue;
    }  

         else if(taxi[i]+taxi[n-1]==4)
            {
                count+=1;
                *ptr-=1;
            } 
         else if((taxi[i]+taxi[n-1]<4))     
            {
                if(i==n-1 && taxi[i]==1)       // then nicher <4 condition true hye 1 er sthe e abr taxi[n-1]plus hye jhamela hbe 
                   {
                     count+=1;
                     break;
                   }


                   if(taxi[i]+taxi[n-1]+taxi[n-2]<=4)
                      {
                         if(taxi[i]+taxi[n-1]+taxi[n-2]==4)
                           {
                            count+=1;
                            *ptr-=2;
                            continue;
                           }
                         else if(taxi[i]+taxi[n-1]+taxi[n-2]<4) 
                           {
                             if(taxi[i]+taxi[n-1]+taxi[n-2]+taxi[n-3]==4)
                                 {
                                    count+=1;
                                   *ptr-=3;
                                    continue;
                                 }   
                             else
                                 {
                                     count+=1;
                                     *ptr-=2;
                                     continue;
                                 }    


                           } 
                      }



            }
         else
            {
                count+=1;
                continue;
            }
        }
        
    printf("%d\n",count);    
}





// 4,4 || 3,1 ||2,2 then 2,1  //
 //niye kaj

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

//     for (int i = 0; i < n; i++) {
//         int x;
//         scanf("%d", &x);
//         if (x == 1) count1++;
//         else if (x == 2) count2++;
//         else if (x == 3) count3++;
//         else count4++;
//     }

//     int count = count4;

//     // 3 with 1
//     int pair = count3 < count1 ? count3 : count1;
//     count += count3;
//     count1 -= pair;

//     // 2 with 2
//     count += count2 / 2;
//     count2 = count2 % 2;

//     // if one group of 2 is left
//     if (count2 == 1) {
//         if (count1 <= 2) count += 1;
//         else {
//             count += 1;
//             count1 -= 2;
//         }
//     }

//     // remaining 1's
//     if (count1 > 0) count += (count1 + 3) / 4;

//     printf("%d\n", count);
//     return 0;
// }