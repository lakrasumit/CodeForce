#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >> s;

    vector<char> st;

    for (char c : s) {
        if (!st.empty() && ((st.back() == 'A' && c == 'B') || (st.back() == 'B' && c == 'B'))) {
            st.pop_back();
        } else {
            st.push_back(c);
        }
    }

    cout << st.size() << "\n";
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