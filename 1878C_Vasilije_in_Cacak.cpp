#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,x;
        cin>>n>>k>>x;

        if(n<x)
          {
             long long sum=n*(n+1)/2;
             if(sum>=x)
               {
                long long min_sum = k*(k+1)/2   ; 
                 long long sum1=0;
                 while(k--)
                      {
                         sum1+=n;
                         n--;
                      }  

                  if(sum1>=x && min_sum <= x)
                     cout<<"YES"<<endl;
                  else
                     cout<<"NO"<<endl;       
               }
              else
                 cout<<"NO"<<endl; 
          }

        else
          {
            long long min_sum = k * (k + 1) / 2;
    
            if(min_sum <= x)
                  cout << "YES" << endl;
             else
                  cout << "NO" << endl;
          }  
    }
    
    return 0;
}