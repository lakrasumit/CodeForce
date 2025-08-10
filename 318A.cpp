#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a, b;
    cin >> a >> b;

    int oddCount = (a + 1) / 2;

    if (b <= oddCount) {
        cout << 2 * b - 1;
    } else {
        cout << 2 * (b - oddCount); 
    }
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