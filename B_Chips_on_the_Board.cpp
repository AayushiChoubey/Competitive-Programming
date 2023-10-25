#include <bits/stdc++.h>
 
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    ll mnA = *min_element(a.begin(), a.end());
    ll sA = accumulate(a.begin(), a.end(), 0LL);
    ll mnB = *min_element(b.begin(), b.end());
    ll sB = accumulate(b.begin(), b.end(), 0LL);
    ll ans = min(mnA * n + sB, mnB * n + sA);
    cout << ans << '\n';
  }
}