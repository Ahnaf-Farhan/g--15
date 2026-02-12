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
        string s;
        cin>>s;

        s.erase(s.size()-1);
        s[s.size()-1]='i';

        cout<<s<<endl;
    }
    
    return 0;
}