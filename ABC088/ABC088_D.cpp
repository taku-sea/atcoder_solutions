#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

vector <vector <bool>> v(50, vector <bool> (50, 0));
vector <vector <ll>> d(50, vector <ll> (50, INF));
vector <ll> x = {1, -1, 0, 0};
vector <ll> y = {0, 0, 1, -1};

void dfs(ll a, ll b) {
    rep(i, 4) {
        ll n_x = a+x.at(i), n_y = b+y.at(i);
        if (0<=n_x&&n_x<50 && 0<=n_y&&n_y<50) {
            if (v.at(n_x).at(n_y) && d.at(a).at(b)+1<d.at(n_x).at(n_y)) {
                d.at(n_x).at(n_y) = d.at(a).at(b) + 1;
                dfs(n_x, n_y);
            }
        }
    }
    return;
}

int main() {
    ll h, w; cin >> h >> w;
    ll tmp = 0;
    rep(i, h) {
        rep(j, w) {
            char c; cin >> c;
            if (c == '.') v.at(i).at(j) = 1;
            else tmp++;
        }
    }
    d.at(0).at(0) = 1;
    dfs(0, 0);
    if (d.at(h-1).at(w-1) == INF) cout << -1 << endl;
    else cout << h*w - d.at(h-1).at(w-1) - tmp << endl;
}