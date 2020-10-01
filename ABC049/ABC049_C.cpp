#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    string s; cin >> s;
    vector <char> v(s.size());
    rep(i, s.size()) v.at(i) = s.at(s.size()-1-i);
    ll i = 0;
    bool flag = 1;
    while (i < v.size()) {
        if (v.at(i+2) == 'e') {
            string tmp = "maerd";
            rep(j, 5) {
                if (i+j >= v.size()) break;
                if (v.at(i+j) != tmp.at(j)) flag = 0;
            }
            i += 5;
        } else if (v.at(i+2) == 'm') {
            string tmp = "remaerd";
            rep(j, 7) {
                if (i+j >= v.size()) break;
                if (v.at(i+j) != tmp.at(j)) flag = 0;
            }
            i += 7;
        } else if (v.at(i+2) == 'a') {
            string tmp = "esare";
            rep(j, 5) {
                if (i+j >= v.size()) break;
                if (v.at(i+j) != tmp.at(j)) flag = 0;
            }
            i += 5;
        } else if (v.at(i+2) == 's') {
            string tmp = "resare";
            rep(j, 6) {
                if (i+j >= v.size()) break;
                if (v.at(i+j) != tmp.at(j)) flag = 0;
            }
            i += 6;
        } else {
            flag = 0;
            break;
        }
    }
    if (i==v.size() && flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}