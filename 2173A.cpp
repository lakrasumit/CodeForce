#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k, count = 0; cin >> n >> k;

    string a;
    cin >> a;

    int awake_until = -1, i = 0;

    while (i < a.size()) {
        if (a[i] == '1') {
            awake_until = max(awake_until, i + k);
            i++;
        } else {
            if (i > awake_until) {
                count++;
            }
            i++;
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