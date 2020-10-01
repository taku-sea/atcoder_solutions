#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    vector <ll> v(87);
    v.at(0) = 2; v.at(1) = 1;
    for (ll i = 2; i < 87; i++) v.at(i) = v.at(i-1)+v.at(i-2);
    ll n; cin >> n;
    cout << v.at(n) << endl;
}