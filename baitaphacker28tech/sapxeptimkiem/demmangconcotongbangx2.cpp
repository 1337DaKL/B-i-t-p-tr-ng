#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    map<ll, ll> mp;
    ll dem = 0, tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
        if (mp.count(tong - m))
        {
            dem += mp[tong - m];
        }
        if (tong == m)
        {
            dem++;
        }
        mp[tong]++;
    }
    cout << dem << endl;
}