#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int m, s, max1 = -1e18, min1 = 1e18;
    
    cin >> m >> s;

    if (s == 0 || s > 9*m) {
        cout << "-1 -1" << endl;
        return;
    }

    for (int i = pow(10, m - 1); i < pow(10, m); i++) {

        int temp = i;
        int sum1 = 0;

        while (temp > 0) {
            sum1 += temp % 10;
            temp = temp / 10;
        }

        if (sum1 == s) {
            max1 = max(max1, i);
            min1 = min(min1, i);
        }
    }

    if (max1 == -1e18) {
        cout << -1 << " " << -1 << endl;
    } else {
        cout << min1 << " " << max1;
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