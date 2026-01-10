#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    ll zeros = 0, ones = 0;
    for (char c : s) {
        if (c == '0') zeros++;
        else ones++;
    }

    // Base case: total 0s * total 1s
    ll result = zeros * ones;

    // Track longest consecutive segments
    ll max_seg = 0;
    ll current_run = 0;
    char last_char = ' ';

    for (int i = 0; i < n; i++) {
        if (s[i] == last_char) {
            current_run++;
        } else {
            current_run = 1;
            last_char = s[i];
        }
        max_seg = max(max_seg, current_run);
        
        // Check if current continuous block squared beats current result
        result = max(result, current_run * current_run);
    }

    cout << result << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}