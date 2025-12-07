#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

const int MAX_VAL = 200005 + 5; 
vector<int> smallest_prime_factor;

void build_sieve() {
    if (!smallest_prime_factor.empty()) return; 
    smallest_prime_factor.resize(MAX_VAL);
    iota(smallest_prime_factor.begin(), smallest_prime_factor.end(), 0);
    for (long long i = 2; i * i < MAX_VAL; ++i) {
        if (smallest_prime_factor[i] == i) { 
            for (long long j = i * i; j < MAX_VAL; j += i) {
                if (smallest_prime_factor[j] == j) {
                    smallest_prime_factor[j] = i;
                }
            }
        }
    }
}

vector<int> get_distinct_prime_factors(int num) {
    if (num <= 1) {
        return {};
    }
    vector<int> factors;
    while (num > 1) {
        int p = smallest_prime_factor[num];
        factors.push_back(p);
        while (num > 0 && num % p == 0) {
            num /= p;
        }
    }
    return factors;
}

void solve_current_case() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; ++i) {
        int dummy;
        cin >> dummy;
    }
    
    
    vector<bool> p_seen(MAX_VAL, false);
    bool has_cost_zero = false;
    for (int val : a) {
        vector<int> factors = get_distinct_prime_factors(val);
        for (int p : factors) {
            if (p_seen[p]) {
                has_cost_zero = true;
                break;
            }
        }
        if (has_cost_zero) break;
        for (int p : factors) {
            p_seen[p] = true;
        }
    }

    if (has_cost_zero) {
        cout << 0 << "\n";
        return;
    }

    
    vector<bool> initial_primes(MAX_VAL, false);
    for (int val : a) {
        vector<int> factors = get_distinct_prime_factors(val);
        for (int p : factors) {
            initial_primes[p] = true;
        }
    }

    bool has_cost_one = false;
    for (int val : a) {
        vector<int> factors_plus_one = get_distinct_prime_factors(val + 1);
        for (int p : factors_plus_one) {
            if (initial_primes[p]) {
                has_cost_one = true;
                break;
            }
        }
        if (has_cost_one) break;
    }

    if (has_cost_one) {
        cout << 1 << "\n";
        return;
    }

    
    cout << 2 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    build_sieve();

    int t;
    cin >> t;
    while (t--) {
        solve_current_case();
    }

    return 0;
}