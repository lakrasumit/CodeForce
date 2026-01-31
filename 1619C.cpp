#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a, s, d1, d2, b = 0, place = 1;

    cin >> a >> s;

    while (a > 0 || s > 0) {

        d1 = s % 10;
        s /= 10;

        d2 = a % 10;
        a /= 10;

        if (d1 < d2) {

            if (s == 0) {
                cout << -1 << endl;
                return;
            }

            d1 += (s % 10) * 10;
            s /= 10;

        }

        int digit = d1 - d2;

        if (digit < 0 || digit > 9) {
            cout << -1 << endl;
            return;
        }

        b += digit * place;
        place *= 10;

    }

    cout << b << endl;



    // 1106911
    //   17236
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