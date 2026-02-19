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
        int n,flag=1;
        cin>>n;

        vector<int> v;
        for(int i=0; i<n; i++)
            {
            int x;
            cin>>x;
              v.push_back(x);
            }

        if(n==1)
          cout<<"YES"<<endl;
        else
        {
            sort(v.begin(),v.end());  
        for(int i=1; i<n; i++)
            {
              if(!(v[i]-v[i-1]<=1))
                {
                    cout<<"NO"<<endl;
                    flag=0;
                    break;
                }
            } 
            
          if(flag)
            cout<<"YES"<<endl;  
        }    
        
    }
    
    return 0;
}