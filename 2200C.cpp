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

    stack<char> s;

    for (int i = 0; i < n; i++) {

        if (!s.empty() && ((s.top() == a[i]))) {
            s.pop();
        } else {
            s.push(a[i]);
        }

    }

    if (!s.empty()) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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