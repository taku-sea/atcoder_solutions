#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    string s; cin >> s;
    if (s.at(0)==s.at(1) && s.at(1)==s.at(2)) cout << "Yes" << endl;
    else if (s.at(1)==s.at(2) && s.at(2)==s.at(3)) cout << "Yes" << endl;
    else cout << "No" << endl;
}