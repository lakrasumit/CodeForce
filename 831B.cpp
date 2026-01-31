#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string a, b, c;

    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    unordered_map<char, char> mapp;

    for (int i = 0; i < 26; i++) {
        mapp[a[i]] = b[i];
    }

    for (int i = 0; i < c.size(); i++) {
        if (c[i] >= 'A' && c[i] <= 'Z') {
            cout << (char)toupper(mapp[tolower(c[i])]);
        } else if (c[i] >= 'a' && c[i] <= 'z') {
            cout << mapp[c[i]];
        } else {
            cout << c[i];
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