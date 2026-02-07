#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, h, l;
    cin >> n >> h >> l;

    int A = 0, B = 0, C = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= h) A++;
        if (x <= l) B++;
        if (x <= min(h, l)) C++;
    }

    cout << min({A, B, (A + B - C) / 2}) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
