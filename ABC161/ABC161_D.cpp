#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
int ctoi(char c) {
  if (c >= '0' && c <= '9') {
    return c - '0';
  }
  return 0;
}
ll factorial(ll n) {
  if (n == 1) {
    return 1;
  }
  ll ans = factorial(n-1);
  return ans*n;
}
ll gcd(ll a, ll b) {
  if (b == 0) return a;
  return gcd(b, a%b);
}
ll lcm(ll a, ll b) {
  return (a/gcd(a, b))*b;
}
bool is_prime(ll n) {
  for (ll i = 2; i*i <= n; i++) {
    if (n%i == 0) return false;
  }
  return n != 1;
}
ll mod_pow(ll x, ll n, ll mod) {
  if (n == 0) return 1;
  ll res = mod_pow(x*x%mod, n/2, mod);
  if (n & 1) res = res * x % mod;
  return res;
}

int main() {
  ll k;
  cin >> k;
  if (k < 10) cout << k << endl;
  else {
    queue <ll> q;
    rep(i, 9) q.push(i+1);
    ll count = 9;
    ll res1, res2, res3;
    while (count < k) {
      ll num = q.front(); q.pop();
      if (num%10 == 0) {
        q.push(num*10); q.push(num*10+1);
        res2 = num*10, res3 = num*10+1;
        count += 2;
      } else if (num%10 == 9) {
        q.push(num*10+8); q.push(num*10+9);
        res2 = num*10+8, res3 = num*10+9;
        count += 2;
      } else {
        for (ll i = -1; i <= 1; i++) {
          q.push(num*10 + num%10 + i);
          if (i < 0) res1 = num*10 + num%10 + i;
          if (i == 0) res2 = num*10 + num%10 + i;
          if (i > 0) res3 = num*10 + num%10 + i;
          count++;
        }
      }
    }
    if (count == k) cout << res3 << endl;
    else if (count-1 == k) cout << res2 << endl;
    else cout << res1 << endl;
  }
}
