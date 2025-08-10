#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a, b, d;
    vi v;
    cin >> a;
    cin >> b;

    d = v.size();

    for (int i = 0; i < a; i++) {
        cin >> v[i];
        if (v[i] == 0) {
            b--;
        }

        if ((b == 0) && (d == i - 1))
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