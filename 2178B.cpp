#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string a;
    cin >> a;

    int m, n, count = 0;

    for (int i = 0; i < a.size(); i++) {

        if (a[i] == 'u') {
            m = i - 1;
            n = i + 1;

            while ((m > -1 && n < a.size() - 1) && (a[m] != 's' || a[n] != 's')) {
                m--;
                n++;
            }

            if (m == -1 || n >= a.size()) {
                count++;
                continue;
            }

            if (i - m == n - i) {
                continue;

            } else {
                a[m] = 's'; a[n] = 's';
                count++;
            }
        } 
    }
    
    cout << count << endl;
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