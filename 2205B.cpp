#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

int getRadical(int n) {
    if (n <= 0) return 0;
    int k = 1;

    if (n % 2 == 0) {
        k *= 2;
        while (n % 2 == 0) n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            k *= i;
            while (n % i == 0) n /= i;
        }
    }

    if (n > 1) k *= n;
    
    return k;
}

void solve() {
    
    int n;
    cin >> n;

    cout << getRadical(n) << endl;
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