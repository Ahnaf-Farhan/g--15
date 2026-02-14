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
        int n;
        cin>>n;
        map<int,int>m;
        for(int i=0; i<n; i++)
            {
                int x;
                cin>>x;
                m[x]++;
            } 

        int flag=0;
        for(auto it:m)
            {
              if((it.second)>=3)
                 {
                    cout<<it.first<<endl;
                    flag=1;
                    break; 
                 }
            }
        if(!flag)    
          cout<<-1<<endl;  
    }
    
    return 0;
}