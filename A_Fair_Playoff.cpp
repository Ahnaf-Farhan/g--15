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
        vector<int> v;
        for(int i=0;i<4;i++)
           {
            int x;
            cin>>x;
             v.push_back(x);
           }

        int max1=max(v[0],v[1]),max2=max(v[2],v[3]);
        sort(v.begin(),v.end());
        if(v[2]==min(max1,max2)&&v[3]==max(max1,max2))
          cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;  

    }
    
    return 0;
}