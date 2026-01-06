#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> v(n + 1), pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            pref[i] = pref[i - 1] + v[i];
        }

        long long total_sum = pref[n];

        while (q--) {
            int l, r;
            long long k;
            cin >> l >> r >> k;

            long long segment_sum = pref[r] - pref[l - 1];
            long long new_sum = total_sum - segment_sum + (r - l + 1LL) * k;

            if (new_sum & 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}