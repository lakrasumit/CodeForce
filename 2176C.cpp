#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;

    vi v(n), prefix(n + 1, 0);

    for (int k: v) {
        cin >> k;
    }

    // 4 3 3 2 1

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + v[i];
        if (prefix[i] % 2 == 0) {
            
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