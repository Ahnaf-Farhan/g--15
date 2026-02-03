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
        
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            sort(v.begin(),v.end(),greater<int>());
            int count=1, max_res=0;
            
            for(int i=1; i<n; i++)
                v[i-1] = v[i-1] - v[i];

            for(int i=0; i<n-1; i++)
            {
                if(v[i] <= k)
                    count++;
                else
                {
                    max_res = max(max_res, count);
                    count = 1;
                }
            } 
            
            max_res = max(max_res, count); 
            cout << n - max_res << endl;  
        }  
    }
    
    return 0;
}