#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char cp[500];
  scanf("%s",cp);
  int n=strlen(cp);

  if(n==1)                                 //edge case
    {
        if(cp[0]>='a'&&cp[0]<='z')
           printf("%c",toupper(cp[0]));
        else
           printf("%c",tolower(cp[0]));  
           
      return 0;     
    }

    int i=0;
   while(i<n)
      {
        if(cp[i]>='A'&&cp[i]<='Z')          //milabo prblm er first case-shb uppercase e naki
          i++;
        else
          {
            if(i==0)                 //khub e jhamela r edge case
              i++;
            break;               //goto er alternate
          }  

        if(i==n)
          {
            for(int j=0;j<n;j++)
               {
                 printf("%c",tolower(cp[j]));
               }

          return 0;   
          }  
      } 
    

    while(i<n)
        {
            if(cp[i]>='A'&&cp[i]<='Z')          //akhn milabo second  case mile nki
                i++;
            
            else
              {
                printf("%s",cp);
                return 0;
              }  
              
            if(i==n)
               {
                 printf("%c",toupper(cp[0]));
                 for(int j=1;j<n;j++)
               {
                 printf("%c",tolower(cp[j]));
               }
                return 0;  
               }  
        }

}


         //age first char bade bakigulor case dekhbo uppercase naki,
         //then jst first letter er case er upor shb depended

// int i = 1;

// // Check rest characters from index 1
// while (i < n && cp[i] >= 'A' && cp[i] <= 'Z') {
//     i++;
// }

// if (i == n && cp[0] >= 'a' && cp[0] <= 'z') {
//     // Case 2: first lowercase, rest uppercase
//     printf("%c", toupper(cp[0]));
//     for (int j = 1; j < n; j++) {
//         printf("%c", tolower(cp[j]));
//     }
// }
// else if (i == n) {
//     // Case 1: all uppercase
//     for (int j = 0; j < n; j++) {
//         printf("%c", tolower(cp[j]));
//     }
// }
// else {
//     // Otherwise, unchanged
//     printf("%s", cp);
// }