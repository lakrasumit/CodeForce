#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a, b;
    cin >> a >> b;

    int ans = 0;

    for(int f = 0; f < 2; f++){
        int w = 0, d = 0;
        for(int i = 0; i < 60; i++){
            int x = 1LL << i;
            if((i & 1) == f) w += x;
            else d += x;
            if(w <= a && d <= b) ans = max(ans, i + 1);
            else break;
        }
    }

    cout << ans << "\n";
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
