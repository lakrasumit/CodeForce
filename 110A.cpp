#include <bits/stdc++.h>
#include <string>
using namespace std;


#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a;
    cin >> a;
    // a = to_string(a);

    for (char x: to_string(a)) {
        if (x != '4' && x != '7') {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
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