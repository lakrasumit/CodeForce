#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    
    int k, n, m;
    cin >> k >> n >> m;

    vi v1(n), v2(m), final;
    for (int &i: v1) cin >> i;
    for (int &i: v2) cin >> i;
    
    int i = 0, j = 0;

    while (i < n && j < m) {

        if (v1[i] > k && v2[j] > k) {
            cout << -1 << endl;
            return;
        }

        while (i < n && v1[i] <= k ) {
            final.push_back(v1[i]);
            if (v1[i] == 0) k++;
            i++;
        }

        while (j < m && v2[j] <= k) {
            final.push_back(v2[j]);
            if (v2[j] == 0) k++;
            j++;
        }
    }

    while (i < n) {
        if (v1[i] > k) {
            cout << -1 << endl;
            return;
        }
        final.push_back(v1[i]);
        if (v1[i] == 0) k++;
        i++;
    }

    while (j < m) {
        if (v2[j] > k) {
            cout << -1 << endl;
            return;
        }
        final.push_back(v2[j]);
        if (v2[j] == 0) k++;
        j++;
    }

    for (int i: final) cout << i << " ";
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