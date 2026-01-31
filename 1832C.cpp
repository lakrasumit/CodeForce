#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n1;
    cin >> n1;

    vector<int> a(n1);
    for (int &t: a) cin >> t;

    int n = unique(a.begin(), a.end()) - a.begin();

    int count = n;
    for (int i = 1; i < n - 1; i++) {
        count -= (a[i - 1] < a[i] && a[i] < a[i + 1]);
        count -= (a[i - 1] > a[i] && a[i] > a[i + 1]);
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