    #include <bits/stdc++.h>
    using namespace std;

    #define int long long

    void solve() {
        int n;
        if (!(cin >> n)) return;

        if (n <= 9) {
            cout << 0 << endl;
            return;
        }

        priority_queue<int> pq;
        int current_sum = 0;
        int count1 = 0;

        while (n > 0) {
            int digit = n % 10;
            n /= 10;

            if (n == 0) {
                current_sum += digit;
                pq.push(digit - 1); 
            } else {
                current_sum += digit;
                pq.push(digit);
            }

            while (current_sum > 9 && !pq.empty()) {
                int top_val = pq.top();
                pq.pop();
                
                if (top_val <= 0) continue;
                
                current_sum -= top_val;
                count1++;
            }
        }

        cout << count1 << endl;
    }

    int32_t main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        if (!(cin >> t)) return 0;
        while (t--) {
            solve();
        }
        return 0;
    }