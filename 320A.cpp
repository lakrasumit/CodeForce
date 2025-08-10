#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a;
    cin >> a;
    string b = to_string(a);

    for (int i = 0; i < b.size(); i++) {
        if (b[i] == 1) {
            if (b[i+1] == 4) {
                if (b[i+2] == 4) {
                    i += 2;
                } else {
                    i++;
                }

            }
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