#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {

    int z;
    cin >> z;

    string a;
    cin >> a;

    int left = 0, right = 1;
    int count = 0;

    while (right != a.size()) {
        if (a[left] == a[right]) {
            count++;
            left++;
            right++;
        } else {
            left++;
            right++;
        }
    }

    cout << count;
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