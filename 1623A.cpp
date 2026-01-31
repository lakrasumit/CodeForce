#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, m, rb, cb, rd, cd, count = 0, x = 1, y = 1;
    cin >> n >> m >> rb >> cb >> rd >> cd;

    // 6, 1
    // 2, 8

    while (rb != rd && rb != cd && cd != rd && cb != cd) {

        count++;

        if (rb == n || rb == m) x = 0;
        if (cb == m || ) y = 0;

        if (!x) rb++; else rb--;
        if (!y) cb++; else cb--;
        
    }

    cout << count << endl;
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