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
        int n,max=0;
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++)
            {
                int x;
                cin>>x;
              v.push_back(x);

              if(v[max]<x)
                 max=i;   
            }

          cout<<v[max]*n<<endl;  
        }      
         
    return 0;
}