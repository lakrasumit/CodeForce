#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, t;

    cin >> n >> t;
    cin.ignore();

    string a;
    getline(cin , a);

    for (int i = 0; i < t; i++) {
        for (int j = 1; j < n; j++) {
            if ((a[j] == 'G') && (a[j - 1] == 'B')) {
                swap(a[j], a[j - 1]);
                j++;
            }
        }
    }

    cout << a << endl;
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