#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx;
    vector<uint64_t> a(100001, 0);
    vector<uint64_t> dp(100001, 0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
        mx = max(mx, x);
    }

    dp[1] = a[1];
    for (int i = 2; i <= mx; i++) {
        dp[i] = max(dp[i - 2] + i * a[i], dp[i - 1]);
    }

    cout << dp[mx] << endl;

    return 0;
}