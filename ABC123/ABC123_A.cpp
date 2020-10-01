#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    ll a, e, k;
    rep(i, 6) {
        if (i == 0) cin >> a;
        else if (i == 4) cin >> e;
        else if (i == 5) cin >> k;
        else {
            ll tmp; cin >> tmp;
        }
    }
    if (e-a<=k) cout << "Yay!" << endl;
    else cout << ":(" << endl;
}