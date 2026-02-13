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
        int flag=1;
        int x;
        cin>>x;
        int cmp=x;
        for(int i=0; i<3; i++)
            { x;
              cin>>x;

                if(x!=cmp)
                  flag=0;
            }

          if(!flag)
            cout<<"NO"<<endl;
          else
            cout<<"YES"<<endl;    
    }
    
    return 0;
}