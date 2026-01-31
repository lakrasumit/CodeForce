#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k, count1 = 0, count2 = 0, a;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == k) count1++;
        else count2++;  
    }

    cout << max(count1, count2) << endl;

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