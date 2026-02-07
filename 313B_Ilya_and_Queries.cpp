#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;

    int n;
    cin>>n;

    int cmp=s[0];
    map<int,int> m;
    int res=0;
    m[0]=0;
    for(int i=1; i<s.size(); i++)
        {
          if(cmp==s[i])
                res+=1;     
          else
                cmp=s[i];  

                
             m[i]=res;
                     
        }


    while(n--)
        {
            int l,r;
            cin>>l>>r;
            l--;
            r--;

            cout<<m[r]-m[l]<<endl;

        }
    
    return 0;
}