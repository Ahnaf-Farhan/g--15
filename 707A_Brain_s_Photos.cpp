#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  
        int n,m,flag=0;
        cin>>n>>m;

        int k=n*m;
        while(k--)
            {
                char x;
                cin>>x;

                if(x=='C'|| x=='M'||x=='Y')
                  flag=1;
            }

         if(flag)
           cout<<  "#Color"<<endl;
         else
           cout<<   "#Black&White"<<endl;
    
    
    return 0;
}