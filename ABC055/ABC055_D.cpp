#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    ll n; cin >> n;
    vector <char> v(n);
    rep(i, n) cin >> v.at(i);
    vector <ll> n1 = {1, 1, -1, -1};
    vector <ll> n2 = {1, -1, 1, -1};
    bool flag = 0;
    rep(i, 4) {
        vector <ll> res(n);
        res.at(0) = n1.at(i);
        res.at(1) = n2.at(i);
        for (ll j = 1; j < n; j++) {
            if (j == n-1) {
                bool tmp;
                if (res.at(j)>0 && v.at(j)=='o') tmp = (res.at(j-1)==res.at(0));
                else if (res.at(j)>0 && v.at(j)=='x') tmp = (res.at(j-1)!=res.at(0));
                else if (res.at(j)<0 && v.at(j)=='o') tmp = (res.at(j-1)!=res.at(0));
                else tmp = (res.at(j-1)==res.at(0));
                if (res.at(0)>0 && v.at(0)=='o') flag = tmp && (res.at(1)==res.at(n-1));
                else if (res.at(0)>0 && v.at(0)=='x') flag = tmp && (res.at(1)!=res.at(n-1));
                else if (res.at(0)<0 && v.at(0)=='o') flag = tmp && (res.at(1)!=res.at(n-1));
                else flag = tmp && (res.at(1)==res.at(n-1));
            } else {
                if (res.at(j)>0 && v.at(j)=='o') res.at(j+1) = res.at(j-1);
                else if (res.at(j)>0 && v.at(j)=='x') res.at(j+1) = -res.at(j-1);
                else if (res.at(j)<0 && v.at(j)=='o') res.at(j+1) = -res.at(j-1);
                else res.at(j+1) = res.at(j-1);
            }
        }
        if (flag) {
            rep(j, n) {
                if (res.at(j) > 0) cout << 'S';
                else cout << 'W';
            }
            cout << endl;
            break;
        }
    }
    if (!flag) cout << -1 << endl;
}