#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, count1 = 0;
    cin >> n;

    string a;
    cin >> a;

    char last = a[n - 1];

    for (int i = n - 1; i > -1; i--) {
        if (a[i] != last) count1++;
    }

    cout << count1 << endl;

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