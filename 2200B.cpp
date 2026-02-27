#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()


void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    bool sorted = true;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i > 0 && v[i-1] > v[i]) {
            sorted = false;
        }
    }

    if (sorted) {
        cout << n << endl;
    } else {
        cout << 1 << endl;
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