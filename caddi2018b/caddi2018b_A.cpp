#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
  string s; cin >> s;
  ll res = 0;
  rep(i, 4) {
    if (s.at(i) == '2') res++;
  }
  cout << res << endl;
}
