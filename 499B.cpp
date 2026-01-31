#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, m, a;

    cin >> n >> m;

    unordered_map<string, string> mp;

    for (int i = 0; i < m; i++) {
        string a, b;

        cin >> a >> b;

        if (a.size() <= b.size()) {
            mp[a] = a;
        } else {
            mp[a] = b;
        }
    }

    for (int i = 0; i < n; i++) {
        string c;

        cin >> c;

        cout << mp[c] << " ";
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