#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, keep = 0;
    cin >> n;
    
    string s;
    cin >> s;

    int count = n - 1;

    for (int i = 1; i < n - 1; i++) {
        if (s[i - 1] == s[i + 1]) {
            count--;
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