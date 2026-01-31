#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int total = 0;
    for (int i = 0; i < n - 1; i++) {
        total += llabs(a[i] - a[i + 1]);
    }

    int ans = total;

    ans = min(ans, total - llabs(a[0] - a[1]));
    ans = min(ans, total - llabs(a[n - 2] - a[n - 1]));

    for (int i = 1; i < n - 1; i++) {
        int cur = total
            - llabs(a[i] - a[i - 1])
            - llabs(a[i] - a[i + 1])
            + llabs(a[i - 1] - a[i + 1]);

        ans = min(ans, cur);
    }

    cout << ans << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
