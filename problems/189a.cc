#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    vector<int> a(3);
    vector<int> dp;

    cin >> n;
    dp.resize(n + 1);
    cin >> a[0] >> a[1] >> a[2];

    for (int &ai: a) {
        if (ai <= n) dp[ai] = 1;
    }
    for (int i = 0; i <= n; i++) {
        for (int &ai: a) {
            if (ai < i) {
                if (dp[i - ai] == 0) continue;
                dp[i] = max(dp[i], dp[i - ai] + 1);
            }
        }
    }

    cout << dp[n] << endl;

    return 0;
}