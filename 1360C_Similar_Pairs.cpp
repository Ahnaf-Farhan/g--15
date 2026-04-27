#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n,od=0,ev=0;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;

          v.push_back(x);

          if(x%2!=0)
            od+=1;
          else
            ev+=1;  
        }

    if(od%2==0 && ev%2==0)
      {
        cout<<"YES"<<endl;
        return;
      }
    
      sort(v.begin(),v.end());
      for(int i=1; i<v.size(); i+=2)
         {
           if(v[i]%2 != v[i-1]%2 && v[i]-v[i-1]==1)
             {
                cout<<"YES"<<endl;
                return;
             }   
           else if(i+1 <<v.size() && v[i]%2 != v[i+1]%2 && v[i+1]-v[i]==1)   
             {
                cout<<"YES"<<endl;
                return;
             }   
         }
      
    cout<<"NO"<<endl;
   
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