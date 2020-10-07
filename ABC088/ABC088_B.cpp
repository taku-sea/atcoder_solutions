#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    ll n; cin >> n;
    vector <ll> v(n);
    rep(i, n) cin >> v.at(i);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    ll res = 0;
    rep(i, n) {
        if (i%2) res -= v.at(i);
        else res += v.at(i);
    }
    cout << res << endl;
}