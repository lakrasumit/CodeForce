#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, distinct;

    cin >> n;

    vector<int> a(n);
    set<int> b;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b.insert(a[i]);
    }

    distinct = b.size();

    for (int i = n + 1; i < 1e18 + 1; i++) {
        b.insert(distinct);
        if (b.size() == distinct) {
            cout << distinct << endl;
            return;
        } else {
            distinct = b.size();
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