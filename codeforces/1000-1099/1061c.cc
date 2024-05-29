#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

constexpr int mod = 1e9 + 7;
constexpr int a_max = 1e6 + 1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0;
    vector<int> factors;
    vector<int> dp(a_max, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;

        if (!factors.empty()) factors.clear();

        for (int j = 1; j * j <= a && j <= i; j++) {
            if (a % j == 0) {
                factors.emplace_back(j);
                if (j * j != a && a / j <= i) {
                    factors.emplace_back(a / j);
                }
            }
        }
        sort(factors.begin(), factors.end(), greater<>());
        for (int &factor: factors) {
            dp[factor] = (dp[factor] + dp[factor - 1]) % mod;
            ans = (ans + dp[factor - 1]) % mod;
        }
    }

    cout << ans << endl;

    return 0;
}