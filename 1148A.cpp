#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b) {
        cout << 2 * c + 2 * a;
    } else {
        cout << 2 * c + 2 * min(a, b) + 1;
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