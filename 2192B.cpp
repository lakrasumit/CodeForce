#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> ones, zeros;
    for(int i=0;i<n;i++){
        if(s[i]=='1') ones.push_back(i+1);
        else zeros.push_back(i+1);
    }

    if(ones.size() % 2 == 0){

        cout<<ones.size()<<"\n";
        for(int x:ones) cout<<x<<" ";
        cout<<"\n";
    }
    else if(zeros.size() % 2 == 1){
        cout<<zeros.size()<<"\n";
        for(int x:zeros) cout<<x<<" ";
        cout<<"\n";
    }
        else{
            cout<<-1<<"\n";

}}

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