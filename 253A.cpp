#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n, m;
    string a;
    cin >> n >> m;
    

    while ((n > 0) && (m > 0)) {
        a += 'B';
        a += 'G';
        n--;
        m--;
    }

    while (m > 0) {
        a += 'B';
        m--;
    }

    while (n > 0) {
        a += 'B';
        n--;
    }

    cout << a;
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