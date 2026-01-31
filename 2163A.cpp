#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n), sorted_arr;
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        sorted_arr = arr;
        sort(sorted_arr.begin(), sorted_arr.end());
        
        vector<int> odd_orig, even_orig, odd_sorted, even_sorted;
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) odd_orig.push_back(arr[i]);
            else even_orig.push_back(arr[i]);
        }
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) odd_sorted.push_back(sorted_arr[i]);
            else even_sorted.push_back(sorted_arr[i]);
        }
        
        sort(odd_orig.begin(), odd_orig.end());
        sort(even_orig.begin(), even_orig.end());
        sort(odd_sorted.begin(), odd_sorted.end());
        sort(even_sorted.begin(), even_sorted.end());
        
        if (odd_orig == odd_sorted && even_orig == even_sorted)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
