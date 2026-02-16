#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,p=0,c=0,j=0,res=0;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++)
        {
          int x;
          cin>>x;
          v.push_back(x);
        }
    
    for(int i=n-1;i>=0;i--)
        {
          if(v[j]>0)
            j++;
          else
            break;    
        }

      n-=j;
      j=0;     

    for(int i=0; i<n;i++)
        {
          if(v[i]==-1)
            {
                c+=1;
               for(j=i+1;j<n && v[j]==-1;j++)
                 {
                    c+=1;
                    i=j;
                 } 


               if(p-c<0)   
                 {                    
                    res+=abs(p-c);
                    p=0;     
                    c=0;              
                 } 
               else
                 { 
                    
                    p=p-c;
                    c=0;
                 }               
              
            }
          else
            {
                
                p+=v[i];
            }  
        }

    
    cout<<res<<endl;    

    return 0;
}