#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, min1 = INT_MAX, neg = 0, sum1 = 0;
    cin >> n;

    vector<int> v(n);
    for (int &t : v) {
        cin >> t;
        sum1 += abs(t);
        min1 = min(min1, abs(t));
        if (t < 0) neg++;
    }

    if (neg % 2 == 0) cout << sum1 << endl;
    else cout << sum1 -  min1 + (min1 * -1) << endl;

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