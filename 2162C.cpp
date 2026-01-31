#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int a, b;
    cin >> a >> b;

    if (__builtin_clzll(b) > __builtin_clzll(a)) {
        cout << -1 << '\n';
        return;
    }

    if (a == b) {
        cout << 0 << '\n';
        return;
    }

    vector<int> ops;

    for (int i = 0; i < 62; i++) {
        int x = (1LL << i);
        if (x <= a && ((a & x) == 0)) {
            a += x;
            ops.push_back(x);
        }
    }

    for (int i = 0; i < 62; i++) {
        int x = (1LL << i);
        if (x <= a && ((b & x) == 0)) {
            ops.push_back(x);
        }
    }

    cout << ops.size() << '\n';
    for (int x : ops) cout << x << ' ';
    cout << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
