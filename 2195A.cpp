#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, ab;
    cin >> n;

    bool a = false, b = false;

    for (int i = 0; i < n; i++) {
        cin >> ab;
        if (ab == 1) a = true;
        if (ab == 67) b = true;
    }

    cout <<  (b ? "YES": "NO") << endl;
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