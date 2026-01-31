#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, L;
    cin >> n >> L;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<int> da(n), db(n);
    for (int i = 0; i < n; i++) da[i] = (a[(i + 1) % n] - a[i] + L) % L;
    for (int i = 0; i < n; i++) db[i] = (b[(i + 1) % n] - b[i] + L) % L;

    vector<int> temp = db;
    temp.insert(temp.end(), db.begin(), db.end());

    bool same = search(temp.begin(), temp.end(), da.begin(), da.end()) != temp.end();

    cout << (same ? "YES" : "NO") << '\n';
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