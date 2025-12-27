#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
      {
        vector<vector<char>>v(10);
             int res=0,k=1;
        for(int i=0;i<10;i++)
        {
            int l=1;  
            for(int j=0;j<10;j++)        
              {
                char x;
                cin>>x;
                v[i].push_back(x);

                if(x=='X')
                  {
                    if(j<5 && i<5)
                      {
                        if(j<i)
                          res+=j+1;
                        else
                          res+=i+1;   
                      }
                    else if(i<5 && j>4)
                      {
                        if(j-l<i)
                          res+=j+1;
                        else
                          res+=i+1;
                      } 
                    else
                      {
                        if(j<5)
                          {
                            if(j<i-k)
                              res+=j+1;
                            else
                              res+=i-k+1;   
                          }
                        else
                          {
                            if(j-l<i-k)
                              res+=j+1;
                            else
                              res+=i-k+1;
                          }
                      }  
                      
                    if(j>4)
                     l+=2;

                    if(i>4)
                      k+=2; 
 
                  }
              }
        }
        cout<<res<<endl;
              
      }
}
 
        //alt:      
//            vector<vector<char>> v(10, vector<char>(10));

// for(int i = 0; i < 10; i++) {
//     for(int j = 0; j < 10; j++) {
//         cin >> v[i][j];
//     }
//}   

        //alt:
//         vector<string> grid(10);
// for(int i=0;i<10;i++) cin >> grid[i];

