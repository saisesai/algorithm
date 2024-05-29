// Author Sai (saisesai@qq.com)

#include <bits/stdc++.h>

using namespace std;

#define f32 float
#define f64 double
#define i32 int32_t
#define i64 int64_t
#define u32 uint32_t
#define u64 uint64_t

#define rw   reference_wrapper
#define vec  vector
#define hmap unordered_map

#define fast_io() do{ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);}while(0)

int main() {
    fast_io();

    string s;
    cin >> s;
    s.reserve(1e5 + 1);

    vec<int> dp(s.length() + 1, 0);
    for (int i = 1; i < s.size(); i++) {
        dp[i] = dp[i - 1] + (s[i - 1] == s[i] ? 1 : 0);
    }
    *dp.rbegin() = *(dp.rbegin() + 1);

    int t;
    while (t--) {
        int l, r;
        cout << dp[r - 1] - dp[l - 1] << endl;
    }

    return 0;
}