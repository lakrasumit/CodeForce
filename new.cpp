#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void check(const string& s) {
    int n = s.length();
    for (int i = 1; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            string a = s.substr(0, i);
            string b = s.substr(i, j - i);
            string c = s.substr(j);
            if ((a + c).find(b) != string::npos) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        check(s);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; // this was for wrapping multiple problem sets
    while (t--) {
        solve();
    }
    return 0;
}
