#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    int t;

    cin >> t;
    cin.ignore();

    vector<string> v(t);

    for (int i = 0; i < t; i++) {
        getline(cin, s);
        v.push_back(s);
    }
    
    for (string s: v) {
        if (s.length() > 10) {
            cout << s[0] << to_string(s.length() - 2) << s.back() << '\n';
        } else {
            cout << s << '\n';
        }
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