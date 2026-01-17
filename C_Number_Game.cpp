#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

/**
 * Validates if Alice can win for a specific k.
 * Alice wants to remove the largest possible element <= k - j + 1.
 * Bob wants to make it hardest by increasing the smallest element.
 */
bool can_alice_win(int k, int n, vector<int> a) {
    deque<int> dq;
    sort(a.begin(), a.end());
    for (int x : a) dq.push_back(x);

    for (int j = 1; j <= k; ++j) {
        if (dq.empty()) return false;

        int alice_target = k - j + 1;
        
        // Alice's Turn: Remove the largest element <= alice_target
        int pos = -1;
        for (int i = (int)dq.size() - 1; i >= 0; --i) {
            if (dq[i] <= alice_target) {
                pos = i;
                break;
            }
        }

        if (pos == -1) return false; // Alice has no valid move
        dq.erase(dq.begin() + pos);

        // Bob's Turn: Make the smallest element larger
        if (!dq.empty()) {
            int smallest = dq.front();
            dq.pop_front();
            dq.push_back(smallest + alice_target);
        }
    }
    return true;
}

void process() {
    int n;
    if (!(cin >> n)) return;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int max_k = 0;
    // Since n is small (up to 100), we can check every k from n down to 0
    for (int k = n; k >= 0; --k) {
        if (can_alice_win(k, n, a)) {
            max_k = k;
            break;
        }
    }
    cout << max_k << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        process();
    }
    return 0;
}