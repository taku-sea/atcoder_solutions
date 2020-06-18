#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll n; cin >> n;
  if (n < 105) cout << 0 << endl;
  else {
    ll res = 1;
    for (ll i = 107; i <= n; i += 2) {
      ll count = 0;
      for (ll j = 1; j*j <= i; j++) {
        if (i%j == 0) {
          count++;
          if (i/j != j) count++;
        }
      }
      if (count == 8) res++;
    }
    cout << res << endl;
  }
}
