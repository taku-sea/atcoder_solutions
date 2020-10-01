#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    ll x, y, z, k; cin >> x >> y >> z >> k;
    vector <ll> a(x), b(y), c(z);
    rep(i, x) cin >> a.at(i);
    rep(i, y) cin >> b.at(i);
    rep(i, z) cin >> c.at(i);
    vector <ll> v;
    rep(i, x) {
        rep(j, y) {
            v.push_back(a.at(i) + b.at(j));
        }
    }
    sort(v.begin(), v.end());
    sort(c.begin(), c.end());
    reverse(v.begin(), v.end());
    reverse(c.begin(), c.end());
    vector <ll> loc(z, 0);
    while (k) {
        k--;
        priority_queue <pair <ll, ll>> pq;
        rep(i, z) {
            if (loc.at(i) >= v.size()) continue;
            pq.push(make_pair(c.at(i)+v.at(loc.at(i)), i));
        } 
        pair <ll, ll> p = pq.top();
        cout << p.first << endl;
        loc.at(p.second)++;
    }
}