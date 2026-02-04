#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve_case() {
    int n, k;
    cin >> n >> k;

    vector<int> values(n);
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    if (k >= n) {
        cout << 0 << '\n';
        return;
    }

    vector<int> diffs;
    for (int i = 1; i < n; ++i) {
        diffs.push_back(abs(values[i] - values[i - 1]));
    }

    sort(diffs.begin(), diffs.end());

    int min_cost = 0;
    for (int i = 0; i < n - k; ++i) {
        min_cost += diffs[i];
    }

    cout << min_cost << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_tests;
    cin >> num_tests;
    while (num_tests--) {
        solve_case();
    }
    return 0;
}
