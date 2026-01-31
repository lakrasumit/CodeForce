#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define int long long

void solve()
{
    int n, m1, m2, m3;

    cin >> n;

    if (n <= 2) {
        cout << 0;
    }

    while (n >= 2) {
        m3 = n / 3;
        n = n % 3;

        m2 = n / 2;
        n = n % 2;

        m1 = n;

    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    if (!(cin >> t)) return 0;

    while (t--)
    {
        solve();
    }
    return 0;
}