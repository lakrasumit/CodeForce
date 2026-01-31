#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, m, h, b, c;
    cin >> n >> m >> h;

    vector<int> a(n);
    for (int &t: a) cin >> t;

    vector<int> b1;
    b1 = a;

    for (int i = 0; i < m; i++) {
        cin >> b >> c;

        b1[b - 1] += c;
        if (b1[b - 1] > h) {
            b1 = a;
        }
    }

    for (int &t: b1) cout << t << " ";
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