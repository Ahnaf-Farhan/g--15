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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0; i<n; i++)           
              m[s[i]]++;

           int co=0;
        for(auto it=m.begin();it!=m.end();it++)
             if(((*it).second)%2!=0)
                co+=1;

        int ce=n-co;
        if(co==k || co-1==k)
          cout<<"YES"<<endl;
        else if(co>k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    
    return 0;
}