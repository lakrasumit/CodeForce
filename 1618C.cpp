#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int g1 = 0, g2 = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) g1 = __gcd(g1, a[i]);
        else g2 = __gcd(g2, a[i]);
    }

    bool ok = true;
    for (int i = 1; i < n; i += 2) {
        if (a[i] % g1 == 0) ok = false;
    }
    
    if (ok && g1 > 0) {
        cout << g1 << "\n";
        return;
    }

    ok = true;
    for (int i = 0; i < n; i += 2) {
        if (a[i] % g2 == 0) ok = false;
    }
    if (ok && g2 > 0) {
        cout << g2 << "\n";
        return;
    }

    cout << 0 << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
