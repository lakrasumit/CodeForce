#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string a;
    cin >> a;

    stack<char> s;

    for (int i = 0; i < a.size(); i++) {

        char x = a[i];

        while (!s.empty()) {
            char y = s.top();

            if (x == 'Y' && y == 'Y') {
                cout << "NO\n";
                return;
            }

            s.pop();

            if (x == 'Y' || y == 'Y') x = 'Y';
            else x = 'N';
        }

        s.push(x);
    }

    cout << "YES\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
