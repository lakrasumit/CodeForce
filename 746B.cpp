#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    deque<char> q;

    for (int i = 0; i < n; i++) {
        if (n % 2 == 1) {
            if (i % 2 == 0)
                q.push_back(s[i]);
            else
                q.push_front(s[i]);
        } else {
            if (i % 2 == 0)
                q.push_front(s[i]);
            else
                q.push_back(s[i]);
        }
    }

    for (auto c : q)
        cout << c;
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
