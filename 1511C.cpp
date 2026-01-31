#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> pos(51, -1);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (pos[x] == -1) {
            pos[x] = i;
        }
    }

    while (q--) {
        int t;
        cin >> t;

        int p = pos[t];
        cout << p << " ";

        for (int c = 1; c <= 50; c++) {
            if (pos[c] != -1 && pos[c] < p) {
                pos[c]++;
            }
        }

        pos[t] = 1;
    }

    cout << "\n";
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