#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a, b, count = 0, n = 1, m = 1;

    cin >> a;
    cin >> b;

    if (a > b) swap(a, b);

    while (a < b) {
        a++;
        count += n;
        n++;

        if (a == b) {
            break;
        }

        b--;
        count += m;
        m++;
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