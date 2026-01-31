#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {

    int n, a, m, count;

    cin >> n;

    queue<int> q;

    for (int i = 0; i < n; i++) {
        cin >> a;
        q.push(a);
    }

    while (q.size() > 1) {
        m = q.front();
        q.pop();
        int k;

        if (max(m, q.front()) < max(m, q.back())) {
            q.front() = max(m, q.front());
            count += q.front();
        } else {
            q.back() = max(m, q.back());
            count += q.back();
        }

    }

    cout << count << endl;
    
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