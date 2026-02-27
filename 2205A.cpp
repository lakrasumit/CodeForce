#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, max1 = 0, j = 1;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] > max1) {
            max1 = v[i];
            j = i;
        } 
    }

    swap(v[0], v[j]);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    cout << endl;
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