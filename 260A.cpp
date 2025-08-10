#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

int solve() {
    int a, b, n;
    bool found = false;

    cin >> a >> b >> n;

    while (n--) {
        for (int i = 0; i < 10; i++) {
            int num = (a * 10) + i;
            if (num % b == 0) {
                a = num;
                found = true;
                break;
            }
        }

        if (!found) {
            return -1;
        }
    }

    return a;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while (t--) {
        cout << solve();
    }
    return 0;
}