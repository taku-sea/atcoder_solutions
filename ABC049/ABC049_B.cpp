#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    ll h, w; cin >> h >> w;
    vector <vector <char>> v(h, vector <char> (w));
    rep(i, h) {
        rep(j, w) {
            cin >> v.at(i).at(j);
        }
    }
    rep(i, 2*h) {
        rep(j, w) {
            cout << v.at(i/2).at(j);
        }
        cout << endl;
    }
}