#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll a, b, c, d; cin >> a >> b >> c >> d;
  cout << max(a*b, c*d) << endl;
}
