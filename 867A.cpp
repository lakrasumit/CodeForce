#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {

    int n, ftos = 0, stof = 0;
    cin >> n;
    cin.ignore();

    string a;
    cin >> a;


    for (int i = 0; i < a.size() - 1; i++ ) {
        if (a[i] == 'F' && a[i + 1] == 'S') {
            ftos++;
        } else if (a[i] == 'S' && a[i + 1] == 'F') {
            stof++;
        }
    }


    if (stof > ftos) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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