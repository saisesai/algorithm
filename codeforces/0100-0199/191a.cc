#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int ans(0);
    vector<vector<int>> dp(26, vector<int>(26, 0));
    while (n--) {
        string s;
        cin >> s;
        int head = *s.begin() - 'a';
        int tail = *s.rbegin() - 'a';
        for (int i = 0; i < 26; i++) {
            if (dp[i][head]) {
                dp[i][tail] = max(dp[i][tail], dp[i][head] + int(s.length()));
            }
        }
        dp[head][tail] = max(dp[head][tail], int(s.length()));
        ans = max(ans, dp[tail][tail]);
    }

    cout << ans << endl;

    return 0;
}