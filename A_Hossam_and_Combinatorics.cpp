#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int& x : v) cin >> x;
    map<int, int> cnt;
    for (int x : v) cnt[x]++;
    sort(v.begin(), v.end());
    if (cnt.size() == 1) {
        cout << 1LL * n * (n - 1) << '\n';
    } else {
        ll mn = cnt[v[0]], mx = cnt[v[n-1]];
        cout << 2LL * mn * mx << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
