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

    int t;
    cin >> t;

    while (t--) {
        u64 n, a_min(INT_MAX), b_min(INT_MAX), ans = 0;
        cin >> n;
        vec<u64> a(n), b(n);
        for (u64 &ai: a) {
            cin >> ai;
            a_min = min(a_min, ai);
        }
        for (u64 &bi: b) {
            cin >> bi;
            b_min = min(b_min, bi);
        }
        for (u64 i = 0; i < n; i++) {
            u64 ea = a[i] - a_min;
            u64 eb = b[i] - b_min;
            ans += max(ea, eb);
        }
        cout << ans << endl;
    }

    return 0;
}