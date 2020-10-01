#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (ll)(n); i++)

const ll MAX = 2 * (ll)pow(10, 5) + 1;
vector <ll> a_p(MAX), b_p(MAX);
vector <ll> a_d(MAX), b_d(MAX);

void init(ll n) {
    rep(i, n) {
        a_p.at(i) = i;
        b_p.at(i) = i;
        a_d.at(i) = 0;
        b_d.at(i) = 0;
    }
    return;
}

ll a_find(ll n) {
    if (n == a_p.at(n)) return n;
    return a_p.at(n) = a_find(a_p.at(n));
}

void a_union(ll n, ll m) {
    n = a_find(n); m = a_find(m);
    if (n == m) return;
    if (a_d.at(n) < a_d.at(m)) {
        a_p.at(n) = m;
    } else {
        a_p.at(m) = n;
        if (a_d.at(n) == a_d.at(m)) a_d.at(n)++;
    }
    return;
}

ll b_find(ll n) {
    if (n == b_p.at(n)) return n;
    return b_p.at(n) = b_find(b_p.at(n));
}

void b_union(ll n, ll m) {
    n = b_find(n); m = b_find(m);
    if (n == m) return;
    if (b_d.at(n) < b_d.at(m)) {
        b_p.at(n) = m;
    } else {
        b_p.at(m) = n;
        if (b_d.at(n) == b_d.at(m)) b_d.at(n)++;
    }
    return;
}

int main() {
    ll n, k, l; cin >> n >> k >> l;
    init(n);
    rep(i, k) {
        ll p, q; cin >> p >> q;
        a_union(p-1, q-1);
    }
    rep(i, l) {
        ll p, q; cin >> p >> q;
        b_union(p-1, q-1);
    }
    map <pair <ll, ll>, ll> score;
    rep(i, n) {
        pair <ll, ll> p = make_pair(a_find(i), b_find(i));
        if (score.count(p)) score.at(p)++;
        else score[p] = 1;
    }
    rep(i, n) {
        if (i) cout << ' ';
        pair <ll, ll> p = make_pair(a_find(i), b_find(i));
        cout << score.at(p);
    }
    cout << endl;
}