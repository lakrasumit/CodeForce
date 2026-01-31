#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int total = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            total++;
        } else {
            bool left_empty = (i == 0 || s[i - 1] == '0');
            bool right_empty = (i == n - 1 || s[i + 1] == '0');

            if (left_empty && right_empty) {
                s[i] = '1';
                total++;
            }
        }
    }
    cout << total << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}