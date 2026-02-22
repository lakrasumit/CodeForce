#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,h,k;
    cin>>n>>h>>k;

    vi a(n+1),pref(n+1),suff(n+2,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pref[i]=pref[i-1]+a[i];
    }

    for(int i=n;i>=1;i--){
        suff[i]=max(a[i],suff[i+1]);
    }

    int S=pref[n];
    int ans=LLONG_MAX;

    for(int i=1;i<=n;i++){
        int D=pref[i];
        int time=i;
        if(D<h){
            int rem=h-D;
            int c=(rem+S-1)/S;
            time+=c*n+(c-1)*k;
        }
        ans=min(ans,time);

        int D2=pref[i-1]+suff[i];
        int time2=i;
        if(D2<h){
            int rem=h-D2;
            int c=(rem+S-1)/S;
            time2+=c*n+(c-1)*k;
        }
        ans=min(ans,time2);
    }

    cout<<ans<<"\n";
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