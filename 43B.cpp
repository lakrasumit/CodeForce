#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    map<char, int> freq;

    for (char c : s1) {
        if (c != ' ')
            freq[c]++;
    }

    for (char c : s2) {
        if (c != ' ') {
            if (!freq.count(c) || freq[c] == 0) {
                cout << "NO";
                return;
            }
            freq[c]--;
        }
    }

    cout << "YES";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
