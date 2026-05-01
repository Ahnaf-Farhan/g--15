#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void solve() {
    ll n, k, sum = 0;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) { cin >> v[i]; sum += v[i]; }
    sort(v.begin(), v.end());

    // k টা max এর sum
    ll cn_max = 0;
    for(int i = 0; i < k; i++)
        cn_max += v[n-1-i];

    // k টা min-pair এর sum
    ll cn_min = 0;
    for(int i = 0; i < 2*k; i++)
        cn_min += v[i];

    // max side থেকে replace: ছোট max কে min-pair দিয়ে replace
    ll cn1 = cn_max;
    ll l = 0;
    for(int i = n-k; i < n && v[i] > v[l]+v[l+1]; i++) {
        cn1 = cn1 - v[i] + v[l]+v[l+1];
        l += 2;
    }

    // min side থেকে replace: বড় min-pair কে max দিয়ে replace
    ll cn2 = cn_min;
    ll r = n-1;
    for(int i = 2*k-2; i >= 0 && v[r] < v[i]+v[i+1]; r--) {
        cn2 = cn2 - v[i] - v[i+1] + v[r];
        i -= 2;
    }

    cout << sum - min(cn1, cn2) << "\n";
}
// void solve()
// {
//     ll n,k,sum=0,cn=0;
//     cin>>n>>k;

//     ll l=0,r=n-1;
//     vector<ll> v;
//     for(int i=0; i<n; i++)
//         {
//           ll x;
//           cin>>x;

//           sum+=x;
//           v.push_back(x);
//         }

//      sort(v.begin(),v.end());

//      for(int i=0; i<k; i++)
//         {
//           cn+=v[n-1-i];
//         }

//      for(int i=n-k;i < n && v[i] > (v[l] + v[l+1] ); i++,l+=2)       
//            cn = cn - v[i] + v[l]+v[l+1];
           
         

//       cout<<sum-cn<<endl;  
    // for(int i=1; i<=k; i++)
    //     {
    //        if((v[l]+v[l+1])<=v[r] )
    //          {
    //             if(v[l]+v[l+1] > v[r-1]&& k-i>0)
    //               {
    //                 cn=v[l]+v[l+1];
    //                   for(; i<=k; i++,r--)
    //                    {
    //                      sum-=v[r];
                         
    //                    }

    //                 cout<<max(sum,sum+v[r+1]-v[l]-v[l+1])<<endl;
    //                 return;
    //               }
    //             else
    //               {
    //                 sum-=v[l]+v[l+1];
    //                 l+=2;
    //               }  
                
    //          }
    //        else
    //          {
    //            for(; i<=k; i++,r--)               
    //               sum-=v[r];
                
    //             cout<<sum<<endl;
    //             return;
    //          }  
    //     }

    //   cout<<sum<<endl;  

//}

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