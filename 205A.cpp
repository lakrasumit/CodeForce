#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a, min1 = numeric_limits<int>::max(), index = 0;
    cin >> a;

    vi arr(a);
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
        if (arr[i] < min1) {
            min1 = arr[i];
            index = i;
        }
    }

    if ((count(all(arr), min1)) > 1) {
        cout << "Still Rozdil";
    } else {
        cout << index + 1;
    }
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