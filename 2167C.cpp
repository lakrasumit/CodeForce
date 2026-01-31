#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, odd = 0, even = 0; cin >> n;

    vi v(n);

    for (int &t: v) cin >> t;

    for (int i = 0; i < n; i++) {

        if ((v[i] & 1) == 0) even++;
        else odd++;
    }

    if (even != 0 && odd != 0) {
        sort(v.begin(), v.end());
    }

    for (int t: v) cout << t << " ";
    cout << endl;
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