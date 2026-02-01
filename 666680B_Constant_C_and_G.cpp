#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        double x, h, m, s;
        cin >> x >> h >> m >> s;

  
        double persian_sec = (h * m * s) / 86400.0;

  
        double c = 3e8 / x / persian_sec;

        
        double g = 9.8 / x / (persian_sec * persian_sec);

        cout << fixed << setprecision(6) << c << " " << g << "\n";
    }
    
    return 0;
}