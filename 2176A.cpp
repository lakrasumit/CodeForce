#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, max1 = 0, count = 0;
    cin >> n;

    vi v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    max1 = v[0];

    for (int i = 1; i < n; i++) {
        if (max1 > v[i]) {
            count++;
        } else {
            max1 = v[i];
        }
    }

    cout << count << endl;

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