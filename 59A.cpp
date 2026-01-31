#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string a;
    int greater = 0, smaller = 0;

    cin >> a;

    for (auto x: a) {
        if ((x >= 'A') && (x <= 'Z')) {
            greater++;
        } else {
            smaller++;
        }
    }

    if (smaller >= greater) {
        for (int i = 0; i < a.size(); i++) cout << (char)tolower(a[i]);
    } else {
        for (int i = 0; i < a.size(); i++) cout << (char)toupper(a[i]);
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