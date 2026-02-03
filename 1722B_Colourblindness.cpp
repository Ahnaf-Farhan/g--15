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
       string s1,s2;
       cin>>s1>>s2;
       int diff='G'-'B';
       bool x=false;
       for(int i=0; i<n; i++)
          if(!(s1[i]-s2[i]==0 ||abs(s1[i]-s2[i])==diff))
             {
                x=true;
                cout<<"NO"<<endl;
                break;
             }

           if(!x)
              cout<<"YES"<<endl;  
    }
    
    return 0;
}