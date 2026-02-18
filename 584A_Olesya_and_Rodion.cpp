#include<bits/stdc++.h>
using namespace std;
// int solve()
//     {
//         long long x,y;
//     cin>>x>>y;

//     if(x==1)
//       {
//         if(y>=10)
//           return -1;
//         else 
//           return y;  
//       }
//     long long min=pow(10,x-1);
//     long long div=ceil((double)min/y);
//     cout<<div*y;

//     return 0;
//     }
int main()
{
    //printf("%d",solve());

     long long x,y;
    cin>>x>>y;

    if(x==1)
      {     
        if(y>=10)
            cout<<-1;
        else
            cout<<y; 

             return 0;
      }


   if(y==10)
      { 
        cout<<1;
        for(int i=1; i<x; i++)
            cout<<0;

            return 0;
      }
   else
      {      
        for(int i=1; i<=x; i++)
            cout<<y;

            return 0;
      }   
    
}