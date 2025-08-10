#include <bits/stdc++.h>
#include <string>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string a;
    cin >> a;

    if (a[0] >= 'a' && a[0] <= 'z') {
        a[0] = toupper(a[0]);
    }

    cout << a;
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