#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    double l, d, v, g, r;

    cin >> l >> d >> v >> g >> r;

    double cycle = g + r;
    double t1 = d / v;
    double phase = fmod(t1, cycle);

    double wait = 0;
    if (phase > g) {
        wait = cycle - phase;
    }

    double total = t1 + wait + (l - d) / v;
    cout << fixed << setprecision(10) << total << "\n";

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