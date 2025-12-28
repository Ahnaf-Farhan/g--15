#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
      {
        long long x,y,k;
        cin>>x>>y>>k;
        while(k--)
        {
            if(k%x==y)
              cout<<k;
        }
      }
}