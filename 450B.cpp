#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int f1, f2, n;
    const int MOD = 1000000007;
    cin >> f1 >> f2 >> n;

    int seq[6];
    seq[0] = f1;
    seq[1] = f2;
    seq[2] = f2 - f1;
    seq[3] = -f1;
    seq[4] = -f2;
    seq[5] = f1 - f2;

    int ans = seq[(n - 1) % 6];
    ans = (ans % MOD + MOD) % MOD;
    cout << ans << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
