// Author Sai (saisesai@qq.com)

#include <bits/stdc++.h>

using namespace std;

#define f32  float
#define f64  double
#define f128 long double
#define i32  int32_t
#define i64  int64_t
#define u32  uint32_t
#define u64  uint64_t

#define rw   reference_wrapper
#define vec  vector
#define hmap unordered_map

#define PI 3.14159265358979323846

#define fast_io() do{ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);}while(0)

#define inf 1e9

int main() {
    fast_io();

    int dp[31][31][51] = {0};

    int t;
    cin >> t;

    function<int(int, int, int)> dfs = [&](int n, int m, int k) -> int {
        if (dp[n][m][k] != 0 || m * n == k || k == 0) {
            return dp[n][m][k];
        }
        int c_min = inf;
        for (int i = 1; i < n; i++) {
            int lk = i * m <= k ? i * m : k;
            int rk = k - lk;
            c_min = min(c_min, m * m + dfs(i, m, lk) + dfs(n - i, m, rk));
        }
        for (int i = 1; i < m; i++) {
            int uk = i * n <= k ? i * n : k;
            int dk = k - uk;
            c_min = min(c_min, n * n + dfs(n, i, uk) + dfs(n, m - i, dk));
        }
        return dp[n][m][k] = c_min;
    };

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        cout << dfs(m, n, k) << endl;
    }

    return 0;
}
