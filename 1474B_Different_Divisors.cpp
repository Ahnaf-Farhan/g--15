#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool isPrime(ll n) 
{
    if(n < 2) return false;
    for(ll i = 2; i*i <= n; i++)
        if(n%i == 0) return false;
    return true;
}

//1:21 AM
// যদি p এবং q দুটোই prime এবং p ≠ q হয় তাহলে p*q এর divisors শুধুমাত্র:

// 1, p, q, p*q
// কারণ p*q কে ভাগ করতে পারে শুধু:

// 1 ✅
// p (prime) ✅
// q (prime) ✅
// p*q ✅
void solve() 
{
    ll d; cin >> d;
    
    ll p = 1 + d;  
    while(!isPrime(p)) p++;
    
    ll q = p + d;  
    while(!isPrime(q)) q++;
    
    cout << p * q << "\n";
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