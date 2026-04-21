#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n,sum=0;
    cin>>n;

    vector<int> v;
    for(int i=9; i>=1; i--)
        {
        if(sum!=n)
        {
            if(sum+i<=n)
            {
                sum+=i;
                v.push_back(i);
            }           
          else
            {
                v.push_back(n-sum);
                sum+=n-sum;
            }
        }             
        }

        sort(v.begin(),v.end());

      if(sum!=n)
        cout<<-1<<endl;
      else
        {
            for(int x:v)
               cout<<x;
        }    

       cout<<endl; 
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