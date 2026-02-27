#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n), v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        v2[i] = v[i];
    }

    sort(v2.begin(), v2.end());

    int score = 0;
    multiset<int> mu;

    for (int i = n - 1; i >= n - k; i--) {
        score += v2[i];
        mu.insert(v2[i]);
    }

    cout << score << endl;

    int count = 0;

    for (int i = 0; i < n; i++) {

        count++;
        if (mu.find(v[i]) != mu.end())  {
            mu.erase(mu.find(v[i]));
            cout << count << " ";
            count = 0;
        }
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