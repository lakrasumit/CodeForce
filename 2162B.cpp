#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vi v;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') v.push_back(i + 1);
    }

    cout << v.size() << endl;
    for (int t: v) cout << t << " ";
    cout << endl;
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