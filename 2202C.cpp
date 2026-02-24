#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int &t: v) cin >> t;

    stack<int> s;

    for (int i = n - 1; i > -1; i--) {

        while ((!s.empty()) && (v[i] + 1 == s.top())) {
            s.pop();
        } s.push(v[i]);
    }

    cout << s.size() << endl;


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