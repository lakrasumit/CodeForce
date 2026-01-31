#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> v(3, vector<int>(n));
    // vector<pair<int, int>> dp()

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }


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