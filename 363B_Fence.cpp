#include<bits/stdc++.h>
using namespace std;
int fun(const vector<int>& v, int i, int k, int n, int curr, int mn)
{
    if(i > n - k)
        return mn;

    mn = min(mn, curr);

    if(i + k < n)   // next window exists
        curr = curr - v[i] + v[i + k];

    return fun(v, i + 1, k, n, curr, mn);
}
void index(const vector<int>& v, int i, int k, int n, int curr, int mn)
{
    if(i > n - k)
        return;

    if(curr == mn)
    {
        cout << i + 1 << endl; // 1-based
        return;
    }

    if(i + k < n)
        curr = curr - v[i] + v[i + k];

    index(v, i + 1, k, n, curr, mn);
}
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int curr = 0;
    for(int i = 0; i < k; i++)
        curr += v[i];

    int mn = fun(v, 0, k, n, curr, curr);
    index(v, 0, k, n, curr, mn);
}