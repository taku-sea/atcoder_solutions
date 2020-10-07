#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    vector <vector <ll>> c(3, vector <ll> (3));
    rep(i, 3) {
        rep(j, 3) {
            cin >> c.at(i).at(j);
        }
    }
    bool flag = 0;
    if (c.at(0).at(0)-c.at(0).at(1) == c.at(1).at(0)-c.at(1).at(1)) {
        if (c.at(1).at(0)-c.at(1).at(1) == c.at(2).at(0)-c.at(2).at(1)) {
            if (c.at(0).at(1)-c.at(0).at(2) == c.at(1).at(1)-c.at(1).at(2)) {
                if (c.at(1).at(1)-c.at(1).at(2) == c.at(2).at(1)-c.at(2).at(2)) {
                    flag = 1;
                }
            }
        }
    }
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}