#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a;
    cin >> a;

    unordered_map<string, int> mapp;

    int countA = 0, countB = 0;

    for (int i = 0; i < a; i++) {
        string z;
        cin >> z;
        mapp[z] += 1;
    }

    string maxKey = "";
    int maxCount = 0;
    for (auto& pair: mapp) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxKey = pair.first;
        } 
    }

    cout << maxKey;

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