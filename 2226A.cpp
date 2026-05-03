#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int sum1 = 0;
    int i = 0;

    while (i < v.size()) {

        int j = i + 1;
        int sum2 = 1;
        sum2 *= v[i];
        while ((j < v.size()) && (v[j] >= v[j - 1])) {
            sum2 *= v[j];
            j++;
        }

        sum1 += sum2;
        i = j;
    }

    cout << sum1 << endl;
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