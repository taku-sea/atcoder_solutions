#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
  ll n; cin >> n;
  bool flag = 0;
  rep(i, n) {
    ll a; cin >> a;
    if (a%2) flag = 1;
  }
  if (flag) cout << "first" << endl;
  else cout << "second" << endl;
}
