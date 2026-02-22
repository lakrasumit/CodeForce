#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {

    int n, final = 0;
    cin >> n;

    string s;
    cin >> s;


    for(int i = 0; i < n; i++){
        
            string r = s.substr(i) + s.substr(0,i);
            int a = 1;
            for(int j = 1; j < n; j++){
                if(r[j] != r[j-1]) a++;
            }
            final = max(final, a);
        }
        cout << final << "\n";
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