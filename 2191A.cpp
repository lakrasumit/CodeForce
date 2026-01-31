#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, sum1 = 0;
    cin >> n;

    vector<int> v(n);
    for (int &t: v) cin >> t;

    for (int i = 0; i + 1 < n; i++) {
        if (v[i] % 2 == v[i + 1] % 2) {
            cout << "NO" << endl;
            return;
        }
    } 

    cout << "YES" << endl;
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