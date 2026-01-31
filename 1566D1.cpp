#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];

    vector<pair<int,int>> v;
    for (int i = 0; i < m; i++)
        v.push_back({a[i], i});

    sort(v.begin(), v.end(), [](const pair<int,int>& x, const pair<int,int>& y) {
        if (x.first != y.first) return x.first < y.first;
        return x.second > y.second;
    });

    vector<int> seat(m);
    for (int i = 0; i < m; i++)
        seat[v[i].second] = i;

    int incon = 0;
    vector<int> used(m, 0);

    for (int i = 0; i < m; i++) {
        int s = seat[i];
        for (int j = 0; j < s; j++)
            incon += used[j];
        used[s] = 1;
    }

    cout << incon << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
