#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string x;
    cin >> x;

    vector<pair<int,int>> cur, new1;
    cur.push_back({1, n});

    for (char c : x) {

        new1.clear();

        for (auto &p : cur) {

            int left = p.first;
            int right = p.second;

            if (left > right) continue;

            char leftChar  = (left % 2 ? 'a' : 'b');
            char rightChar = (right % 2 ? 'a' : 'b');

            if (c == '?' || c == leftChar)
                new1.push_back({left + 1, right});

            if (c == '?' || c == rightChar)
                new1.push_back({left, right - 1});
        }

        if (new1.empty()) {
            cout << "NO\n";
            return;
        }

        sort(new1.begin(), new1.end());
        new1.erase(unique(new1.begin(), new1.end()), new1.end());

        if (new1.size() > 2) new1.resize(2);

        cur = new1;
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}