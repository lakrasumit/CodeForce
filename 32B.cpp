#include <bits/stdc++.h>
#include <string>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string a, final = "";
    cin >> a;


    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '.') {
            final += '0';
        }

        else if (a[i] == '-') {
            if (a[i+1] == '.') {
                final += '1';
            } else if (a[i+1] == '-') {
                final += '2';
            }
            i++;
        }
    }

    cout << final;
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