#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    vector<int> v(7);

    for (int i = 0; i < 7; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int sum1 = 0;
    for (int i = 0; i < 6; i++) {
        sum1 += -1 * v[i];
    }
    sum1 += v[6];

    cout << sum1 << endl;
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