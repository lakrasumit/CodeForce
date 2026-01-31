#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, t, max1 = 0, sum1 = 0, left = 0;

    cin >> n >> t;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {

        sum1 += v[i];

        while (sum1 > t) {
            sum1 -= v[left];
            left++;
        }

        max1 = max(max1, i - left + 1);
    }

    cout << max1 << endl;
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