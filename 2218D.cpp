#include <bits/stdc++.h>
using namespace std;

#define int long long

const int temp = 200000;
vector<int> primes;

void sieve() {
    vector<bool> is_prime(temp, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p < temp; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i < temp; i += p)
                is_prime[i] = false;
        }
    }
    for (int p = 2; p < temp; p++) {
        if (is_prime[p]) primes.push_back(p);
    }
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    
    a[0] = primes[0];
    for (int i = 1; i < n - 1; i++) {
        a[i] = primes[i-1] * primes[i];
    }
    a[n-1] = primes[n-2];

    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}