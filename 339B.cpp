#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, m, current = 1, steps = 0;

    cin >> n >> m;

    vi v(m);

    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < m; i++) {
        if (v[i] >= current)
            steps += v[i] - current;
        else
            steps += (n - current) + v[i];

        current = v[i];
    }

    cout << steps << endl;

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