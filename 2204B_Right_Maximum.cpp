#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() 
{
    int n, op = 0;
    cin >> n;

    map<int, set<int>> m;
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        m[x].insert(i);
    }

    int prev_pos = n + 1;
    for(auto it = m.rbegin(); it != m.rend(); it++) {
        for(auto sit = it->second.rbegin(); sit != it->second.rend(); sit++) {
            if(*sit < prev_pos) {
                op++;
                prev_pos = *sit;
            }
        }
    }

    cout << op << "\n";

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