#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, count = 0, sum = 0;
    cin >> n;

    vi v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        count += v[i];
    }

    for (int x = 1; x <= 5; x++) {
        if ((count + x - 1) % (n 31+ 1) != 0) {
            sum++;
        }
    }

    cout << sum;

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