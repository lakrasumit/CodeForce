#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, p;
    cin >> n;

    vector<int> v(n);
    for (int &t: v) cin >> t;

    vector<int> suffix(n);
    suffix[n - 1] = v[n - 1];
    for (int i = n - 2; i > -1; i--) {
        suffix[i] = max(suffix[i + 1], v[i]);
    }

    for (int i = 0; i < n; i++) {
        if (v[i] < suffix[i]) {

            for (int j = i; j < n; j++) {
                if (v[j] == suffix[i]) {
                    p = j;
                    break;
                }
            }

            reverse(v.begin() + i, v.begin() + p + 1);
            break;
        }
    }

    for (int t: v) cout << t << " ";
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