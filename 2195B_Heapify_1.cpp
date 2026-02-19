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

        vector<int> v;
        v.push_back(0);
        for(int i=0; i<n; i++)
            {
              int x;
              cin>>x;
               v.push_back(x);
            }

        bool found  =true;
        while(found)  
        {
            found=false;
            for(int i=1; i<=n/2; i++)
            {
              if(2*i <= n && v[i]>v[2*i])
                {
                    swap(v[i],v[2*i]);
                    found=true;
                }    
            }
        }
            

          int flag=0;  
          for(int i=1; i<=n; i++)
            {
              if(v[i]<v[i-1])
                {
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            }  
            if(!flag)
              cout<<"YES"<<endl;
    }
    
    return 0;
}