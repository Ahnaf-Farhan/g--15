#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin>>n;

    if(n==2)
      cout<<-1<<endl;
    else
      {
        int odd=(n*n)/2,j=1;
        int even=(n*n)/2,k=2;
        if(odd+even!=n*n)
          odd+=1;

        for(int i=1; i<=n*n; i++)
            {
              if(i<=odd)
                {
                    cout<<j<<" ";
                    j+=2;
                }
              else
                {
                    cout<<k<<" ";
                    k+=2;
                } 
                
               if(i%n==0)
                 cout<<endl; 
            }  
          
      }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}