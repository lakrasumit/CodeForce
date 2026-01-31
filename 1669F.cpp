#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, alice = 0, bob = 0, candies = 0;
    cin >> n;

    vi v(n);
    for (int &t: v) cin >> t;

    alice = v[0]; bob = v[n - 1];

    int i = 0, j = n - 1;

    while (i < j) {
        if (alice == bob) {
            candies = i + 1 + n - j;
            alice += v[++i];
            bob += v[--j];
        }

        if (alice < bob) {
            i++;
            alice += v[i];
        } else if (bob < alice) {
            j--;
            bob += v[j];
        }
    }

    cout << candies << endl;
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