#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isPerfectCube(long long x) {
    long long b = llround(cbrt((long double)x));
    return b * b * b == x;
}

void solve() {
    long long n;
    cin >> n;

    bool ok = false;
    long long limit = cbrt((long double)n);

    for (long long i = 1; i <= limit; i++) {
        long long rem = n - i * i * i;
        if (rem < 1) continue;

        if (isPerfectCube(rem)) {
            ok = true;
            break;
        }
    }

    cout << (ok ? "YES\n" : "NO\n");
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
