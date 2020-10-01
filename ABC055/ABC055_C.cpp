#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    ll n, m; cin >> n >> m;
    if (n <= m/2) {
        ll res = n;
        m -= 2*n;
        res += m/4;
        cout << res << endl;
    } else {
        cout << m/2 << endl;
    }
}