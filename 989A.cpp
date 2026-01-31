#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size();
    vector<set<char>> cells(n);
    for (int i = 0; i < n; i++) if (s[i] != '.') cells[i].insert(s[i]);
    for (int i = 0; i < n; i++) {
        if (s[i] != '.') {
            if (i > 0) cells[i - 1].insert(s[i]);
            if (i + 1 < n) cells[i + 1].insert(s[i]);
        }
    }
    for (auto &st : cells) {
        if (st.count('A') && st.count('B') && st.count('C')) {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
