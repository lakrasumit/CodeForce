#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    sort(all(a));
    sort(all(b));

    if (a == b) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) solve();

    return 0;
}
