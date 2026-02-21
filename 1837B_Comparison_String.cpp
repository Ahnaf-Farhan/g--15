#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
// height reset করে
// valley reuse করে
// range ছোট রাখে।

    int n;
    cin>>n;

    string s;
    cin>>s;

    int maxx=0,temp=1;
    for(int i=1; i<n; i++)        
            if(s[i]==s[i-1])
            temp++;
        else
          {
            maxx=max(maxx,temp);
            temp=1;
          }        
        
      maxx=max(maxx,temp);  
      cout<<maxx+1<<endl;  
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