#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, count = 0, a;

    cin >> n;

    vi v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int mx = v.front();
    int my = v.back();

    for (int i = 1; i < n - 1; i++) {
        if ((mx < v[i]) && (my > v[i])) {
            count++;
        }
    }

    cout << count << endl;
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