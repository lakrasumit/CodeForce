#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, sum = 0, sum2 = 0;
    
    cin >> n;

    vector<int> v(2 * n);

    for (int i = 0; i < 2 * n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (accumulate(v.begin(), v.begin() + n, 0LL) == accumulate(v.begin() + n, v.end(), 0LL)) {
        cout << -1;
    } else {
        for (int x : v) cout << x << " ";


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