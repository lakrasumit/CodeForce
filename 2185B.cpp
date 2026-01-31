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
    for (int &t: v) {
        cin >> t;
        max1 = max(max1, t);
    }

    cout << max1 * n << endl;
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