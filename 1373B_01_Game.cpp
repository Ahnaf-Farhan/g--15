#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
  string s;
  cin>>s;

  int z=0,o=0;
  for(int i=0; i<s.size(); i++)
    {
      if(s[i]=='1')
        o++;
      else
        z++;  
    }

   int op=min(o,z);
   if(op%2==0)
     cout<<"NET"<<endl;
   else
     cout<<"DA"<<endl;
     
     return;
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