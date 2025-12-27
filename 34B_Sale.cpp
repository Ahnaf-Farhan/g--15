#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;

        if(x<0)
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    int res=0;
    int limit = min(m, (int)v.size());
    for(int i=0;i<limit;i++)
       res+=v[i];

    cout<<-res;   
}