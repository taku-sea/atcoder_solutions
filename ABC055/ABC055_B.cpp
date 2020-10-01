#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    ll n; cin >> n;
    ll res = 1;
    rep(i, n) {
        res *= i+1;
        res %= mod;
    }
    cout << res << endl;
}