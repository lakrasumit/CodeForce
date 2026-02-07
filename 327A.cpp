#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int totalOnes = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) totalOnes++;
    }

    int ans = 0;

    for(int i = 0; i < n; i++) {
        
        int zeros = 0, ones = 0;
        for(int j = i; j < n; j++) {
            if(a[j] == 0) zeros++;
            else ones++;

            int newOnes = totalOnes + zeros - ones;
            ans = max(ans, newOnes);
        }
    }

    cout << ans;
    return 0;
}