#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> m;
    
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        m[a] = b;
    }

    for(auto it = m.begin(); it != m.end(); it++)
    {      
        auto temp = it;
        temp++;
        
        if(temp == m.end())
            break;
        
        if((*it).second > (*temp).second)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }   

    cout << "Poor Alex" << endl;
    
    return 0;
}