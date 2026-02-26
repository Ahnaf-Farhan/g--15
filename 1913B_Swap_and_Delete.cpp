#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    string st;
    cin>>st;

    int n = st.size();
    int cnt0 = 0, cnt1 = 0;

    for(char c : st)
    {
        if(c == '0') cnt0++;
        else cnt1++;
    }

    int used = 0;

    for(int i = 0; i < n; i++)
    {
        if(st[i] == '0')
        {
            if(cnt1 > 0)
            {
                cnt1--;
                used++;
            }
            else break;
        }
        else
        {
            if(cnt0 > 0)
            {
                cnt0--;
                used++;
            }
            else break;
        }
    }

    cout << n - used << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}