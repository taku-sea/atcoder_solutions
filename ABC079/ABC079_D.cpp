#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    ll h, w; cin >> h >> w;
    vector <vector <ll>> c(10, vector <ll> (10));
    rep(i, 10) {
        rep(j, 10) cin >> c.at(i).at(j);
    }
    rep(k, 10) {
        rep(i, 10) {
            rep(j, 10) {
                c.at(i).at(j) = min(c.at(i).at(j), c.at(i).at(k)+c.at(k).at(j));
            }
        }
    }
    ll res = 0;
    rep(i, h) {
        rep(j, w) {
            ll a; cin >> a;
            if (a < 0) continue;
            res += c.at(a).at(1);
        }
    }
    cout << res << endl;
}