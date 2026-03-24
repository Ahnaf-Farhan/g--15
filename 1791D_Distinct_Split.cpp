#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    vector<int> v1(26,0), v2(26,0),pre,post;
    int l=0,r=0,res=0;

    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++)
        {
          if(v1[s[i]-'a']==0)
            {
                l+=1;
                pre.push_back(l);
                v1[s[i]-'a']=1;
            }
           else
             pre.push_back(l);
        }
    for(int i=s.size()-1;i>=0 ; i--)
        {
           if(v2[s[i]-'a']==0)
            {
                r+=1;
                post.push_back(r);
                v2[s[i]-'a']=1;
            }
           else
             post.push_back(r);
        }    


     for(int i=0; i<n-1; i++)       
        res = max(res, pre[i] + post[n-2-i]);
       


      cout<<res<<endl;  
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