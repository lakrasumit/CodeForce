#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    string a;
    cin >> a;

    vi ones;
    for (int i = 0; i < n; i++) {
        if (a[i] == '1') ones.pb(i);
    }

    if (ones.size() == n) {
        cout << 0;
        return;
    }

    int max_gap = 0;
    int k = ones.size();

    for (int i = 0; i < k; i++) {
        int curr = ones[i];
        int nxt = ones[(i + 1) % k];

        int gap;
        if (nxt > curr) gap = nxt - curr - 1;
        else gap = n - curr + nxt - 1;

        max_gap = max(max_gap, gap);
    }

    cout << max_gap << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
