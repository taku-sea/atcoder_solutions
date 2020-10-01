#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

int main() {
    char c; cin >> c;
    bool flag = 0;
    if (c == 'a') flag = 1;
    if (c == 'i') flag = 1;
    if (c == 'u') flag = 1;
    if (c == 'e') flag = 1;
    if (c == 'o') flag = 1;
    if (flag) cout << "vowel" << endl;
    else cout << "consonant" << endl;
}