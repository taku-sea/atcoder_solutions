#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    ll res = 0;
    vector <ll> v;
    rep(i, 5) {
        ll a; cin >> a;
        if (a%10) {
            res += a/10*10;
            v.push_back(a%10);
        } else {
            res += a;
        }
    }
    sort(v.begin(), v.end());
    if (v.size()) res += v.at(0) + (v.size()-1)*10;
    cout << res << endl;
}