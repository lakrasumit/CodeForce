#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    int t = 0;
    string a;
    cin >> a;

    for (int i = 0; i + 3 < n; i++) {
        if (a[i] == '2' && a[i + 1] == '0' && a[i + 2] == '2' && a[i + 3] == '5') {
            t++;
        }

        if (a[i] == '2' && a[i + 1] == '0' && a[i + 2] == '2' && a[i + 3] == '6') {
            cout << 0 << endl;
            return;
        }
    }

    cout << (t > 0 ? 1: 0) << endl;
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