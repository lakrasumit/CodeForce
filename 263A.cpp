#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
	int a[5][5];
    for (int i = 0; i < 5; i++) {
    	for (int j = 0; j < 5; j++) {
    		cin >> a[i][j];
    	}
    }

    int m = 0, n = 0, final = 0;

    for (int i = 0; i < 5; i++) {
    	for (int j = 0; j < 5; j++) {
    		if (a[i][j] == 1) {
    			m = i;
    			n = j;
    			break;
    		}
    	}
    }

    cout << abs(m - 2) + abs(n - 2);


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