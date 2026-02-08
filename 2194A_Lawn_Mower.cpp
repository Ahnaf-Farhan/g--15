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
        int n,w;
        cin>>n>>w;

        int x=ceil(n/w);
        cout<<n-x<<endl;
    }
    
    return 0;
}