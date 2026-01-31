#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, min1 = INT_MAX;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        min1 = min(min1, v[i]);
    }

    for (int &t: v) t -= min1;

    sort(v.begin(), v.end());

    int m = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == m) {
            m++;
        } else if (v[i] > m) {
            break;
        }
    }

    cout << m << endl;
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