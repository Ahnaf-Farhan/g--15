#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin >> st;
    
    vector<long long> n, p, l;    
    for(int i = 0; i < 3; i++)
    {
        long long x;
        cin >> x;
        n.push_back(x);
        l.push_back(0); 
    }  
    for(int i = 0; i < 3; i++)
    {
        long long x;
        cin >> x;
        p.push_back(x);
    }  
    

    long long cur, res = 0;
    cin >> cur;   
    for(int i = 0; i < st.size(); i++)
    {
        if(st[i] == 'B')
            l[0] += 1;
        else if(st[i] == 'S')
            l[1] += 1;
        else
            l[2] += 1;    
    } 

     int iterations = 0;
    while(cur > 0 && iterations < 200000)
    {
        long long temp = 0;  
        for(int i = 0; i < 3; i++)
        {
            if(n[i] < l[i])
            {
                long long need = l[i] - max(0LL, n[i]); 
                   temp += need * p[i];
            }
        }

        if(temp > cur)
            break;  
        
        res += 1;                
        cur -= temp;  

        for(int i = 0; i < 3; i++)
            n[i] -= l[i]; 
        
            iterations++;
        if(n[0] <= 0 && n[1] <= 0 && n[2] <= 0)
            break;   
    }
    
    long long per = 0;   
    for(int i = 0; i < 3; i++)
        per += l[i] * p[i];

    res += cur / per; 

    cout << res << endl;    
    
    return 0;
}