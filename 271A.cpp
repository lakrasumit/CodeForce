#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int a;
    cin >> a;
    a++;

    while (true) {
        
        unordered_set<int> mySet;
        
        int temp = a;
        
        while (temp > 0) {
            int d = temp % 10;
            mySet.insert(d);
            temp /= 10;
        }
        
        if (mySet.size() == 4) {
            cout << a;
            break;
            
        } else {
            a++;
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
