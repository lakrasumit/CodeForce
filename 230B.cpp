#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

bool is_T_prime(int f) {
    if (f <= 1) return false;
    int root = sqrt(f);
    if (root * root != f) return false;
    if (root <= 1) return false;
    if (root == 2) return true;
    if (root % 2 == 0) return false;

    for (int i = 3; i * i <= root; i += 2) {
        if (root % i == 0) return false;
    }

    return true;
}

void solve() {
    int n, count;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (auto i: v) {
        if (is_T_prime(i)) {
            cout << "YES" << "\n";
        }  else {
            cout << "NO" << "\n";
        }
    }


}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}