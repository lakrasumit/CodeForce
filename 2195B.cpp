#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    bool a = true;

    vector<int> v(n);
    for (int &t: v) cin >> t;

    for (int i = 0; i < n - 2; i++) {        
        if ((v[i] + 2 == v[i + 2]) || (v[i] - 2 == v[i + 2])) {
            swap(v[i], v[i + 2]);
        } else {
            a = false;
        }
    }
    

    cout << ((a) ? "YES": "NO") << endl;
    
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