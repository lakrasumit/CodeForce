#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    int max1 = (a + b) % n, m = n;

    while (m--) {
        max1 = max(max1, (a + b ) % n);
        a = (a + b) % n;
    }

    cout << max1 << endl;
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