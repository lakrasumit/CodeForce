#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, odd = 0, even = 0;
    char a;
    cin >> n >> a;

    cin.ignore();
    string b;   

    cin >> b;

    for (int i = 0; i < n; i++) {

        if (i % 2 == 0) {
            if (b[i] != a) {
            even++;
        }
    } else {
        if (b[i] != a) {
            odd++;
        }
    }

    if (!even && !odd) {
        cout << 0 << endl;
        return;
    }

    if (!even || !odd) cout << 1 << endl;
    else {
        if (even > odd) {
        cout << 2 << " " << 3 << endl;
        } else {
            cout << 3 << " " << 2 << endl;
        }
    }
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