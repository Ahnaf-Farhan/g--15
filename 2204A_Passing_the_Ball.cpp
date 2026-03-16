#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
   int n,ct=1;
   cin>>n;
   
   string s;
   cin>>s;

   char x=s[0];
   for(int i=0; i<n; i++)
    {
      if(s[i]==s[0])
        ct+=1;
      else
        break;  
    }

    cout<<ct<<endl;
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