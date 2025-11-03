#include<stdio.h>
#include <stdlib.h>
int main()
{
    long long n;
    scanf("%lld",&n);

    long long *round=malloc(n*sizeof(long long));
    for(long long i=0;i<n;i++)
       {
         scanf("%lld",&round[i]);
       }

     for(long long i=0;i<n;i++)
       {
                     int count=1;               //
                     long long temp=round[i];
                    while(temp>9)
                        {
                            if(temp%10!=0)
                               count+=1;

                            temp/=10;
                        }
                    printf("%d",count); 
                    printf("\n");


         long long zero=1;                         //game changing elemets
            while(round[i]>0)
                 {                  
                    long long digit=round[i]%10;                   
                    if(digit!=0)                     //look
                      {
                        printf("%lld ",digit*zero);
                      }

                    round[i]/=10;
                    zero*=10;                          //
                 }

          printf("\n");
               
        }


}



//new array use kre kisuta customized
//If you really want to read all inputs first, you can declare a fixed array safely because t \leq 100:

// int main() {
//     int t;
//     scanf("%d", &t);

//     int numbers[100]; // fixed safe size
//     for (int i = 0; i < t; i++) {
//         scanf("%d", &numbers[i]);
//     }

//     // Then process each number
//     for (int i = 0; i < t; i++) {
//         int n = numbers[i];
//         int parts[5];
//         int count = 0;
//         int base = 1;

//         while (n > 0) {
//             int digit = n % 10;
//             if (digit != 0) {
//                 parts[count++] = digit * base;
//             }
//             n /= 10;
//             base *= 10;
//         }

//         printf("%d\n", count);
//         for (int j = 0; j < count; j++) {
//             printf("%d ", parts[j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }




//direct processing is perfectly safe and simplest.
//loop er proti read e e input nibo,nd sei read e e print kre felabo

// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);  // number of test cases

//     while (t--) {
//         int n;
//         scanf("%d", &n);  // read the number

//         int parts[5]; // at most 4 digits + 1 extra
//         int count = 0;
//         int base = 1;

//         // Break into round numbers
//         while (n > 0) {
//             int digit = n % 10;
//             if (digit != 0) {
//                 parts[count++] = digit * base;
//             }
//             n /= 10;
//             base *= 10;
//         }

//         // Output
//         printf("%d\n", count);
//         for (int i = 0; i < count; i++) {
//             printf("%d ", parts[i]);
//         }
//         printf("\n");
//     }

//     return 0;
// }