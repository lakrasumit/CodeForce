#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, s, x, sum1 = 0;

    cin >> n >> s >> x;

    vector<int> v(n);
    for (int &t: v) {cin >> t; sum1 += t;}

    if (sum1 > s) cout << "NO" << endl;
    else if (((s - sum1) % x) == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
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