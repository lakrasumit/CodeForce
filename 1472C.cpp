#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    vi a(n+1), dp(n+2, 0);

    for (int i = 1; i <=n; i++) cin >> a[i];

    int ans = 0;
    for (int i = n; i >= 1; i--) {
        if (i + a[i] <= n) {
            dp[i] = a[i] + dp[i + a[i]];
        } else {
            dp[i] = a[i];
        }

        ans = max(ans, dp[i]);
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}