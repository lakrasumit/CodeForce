#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    vector<int> v;

    deque<int> d;

    for (int i = 0; i < 3 * n; i++) {
        d.push_back(i + 1);
    }

    while (!d.empty()) {
        int a = d.front();
        d.pop_front();
        v.push_back(a);

        int b = d.back();
        d.pop_back();
        int c = d.back();
        d.pop_back();

        v.push_back(c);
        v.push_back(b);


    }

    for (int x: v) {
        cout << x << " ";
    }

    cout << "\n";
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