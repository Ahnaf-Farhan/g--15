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
        int n,op=0;
        cin>>n;
        vector<int> v;
         for(int i=0; i<n; i++)
            {
              int x;
              cin>>x;
               v.push_back(x);
            }

        for(int i=1; i<n; i++)
            {
              if(v[i]==7-v[i-1] || v[i]==v[i-1])
                {
                    op+=1;
                    i+=1;
                }
            }

          cout<<op<<endl;  
    }
    
    return 0;
}