#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, max1 = INT_MIN;
    cin >> n;

    vector<int> v(n);
    for (int &t: v) cin >> t;

    sort(v.begin(), v.end());

    for (int i = 0; i + 1 < n; i+=2) {
        max1 = max(max1, v[i + 1] - v[i]);
    }

    // max1 = max(max1, v[n - 1] - v[0]);

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