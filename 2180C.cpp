#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k;
    cin >> n >> k;

    if (n == 0) {
        for (int i = 0; i < k; i++) {
            cout << 0 << " ";
        }
        cout << '\n';
        return;
    }

    if (k == 1) {
        cout << n << endl;
        return;
    }

    if ((k & 1) == 1) {
        for (int i = 0; i < k; i++) {
            cout << n << " ";
        }
        cout << endl;
        return;
    }

    int sum1 = (k - 2) * n;

    for (int i = 0; i < k - 2; i++) {
        cout << n << " ";
    }
    cout << n << " " << 0 << endl;
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