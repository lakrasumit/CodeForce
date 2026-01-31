#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &t: v) cin >> t;

    if (v[0] == -1) {
        v[0] = v[n - 1];
    }

    if (v[n - 1] == -1) {
        v[n - 1] = v[0];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == -1) v[i] = 0;
    }

    cout << abs(v[n - 1] - v[0]) << endl;

    for (int &t: v) cout << t << " ";
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