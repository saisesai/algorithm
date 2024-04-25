#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    vector<int> dp(n - k + 1);
    dp[0] = accumulate(a.begin(), a.begin() + k, 0);
    for (int i = 1; i < n - k + 1; i++) {
        dp[i] = dp[i - 1] - a[i - 1] + a[i + k - 1];
    }

    cout << distance(dp.begin(), min_element(dp.begin(), dp.end())) + 1 << endl;

    return 0;
}