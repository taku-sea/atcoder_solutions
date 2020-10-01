#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int ctoi(char c) {
  if (c >= '0' && c <= '9') {
    return c - '0';
  }
  return 0;
}

int main() {
    string s; cin >> s;
    vector <ll> v = {1, 0};
    bool flag = 0;
    rep(i, 2) {
        rep(j, 2) {
            rep(k, 2) {
                ll tmp = ctoi(s.at(0));
                if (v.at(i)) tmp += ctoi(s.at(1));
                else tmp -= ctoi(s.at(1));
                if (v.at(j)) tmp += ctoi(s.at(2));
                else tmp -= ctoi(s.at(2));
                if (v.at(k)) tmp += ctoi(s.at(3));
                else tmp -= ctoi(s.at(3));
                if (tmp == 7) {
                    flag = 1;
                    cout << s.at(0);
                    if (v.at(i)) cout << '+';
                    else cout << '-';
                    cout << s.at(1);
                    if (v.at(j)) cout << '+';
                    else cout << '-';
                    cout << s.at(2);
                    if (v.at(k)) cout << '+';
                    else cout << '-';
                    cout << s.at(3) << "=7" << endl;
                    break;
                }
            }
            if (flag) break;
        }
        if (flag) break;
    }
}