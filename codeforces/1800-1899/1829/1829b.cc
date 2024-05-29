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
        int n;
        cin >> n;
        int prev, n0(0), n0_max(0);
        cin >> prev;
        if (prev == 0) {
            n0++;
        }
        for (int i = 1; i < n; i++) {
            int x;
            cin >> x;
            if (x == 0) {
                n0++;
            }
            if (x == 1 && prev == 0) {
                n0_max = max(n0_max, n0);
                n0 = 0;
            }
            prev = x;
        }
        if (prev == 0) {
            n0_max = max(n0_max, n0);
        }

        cout << n0_max << endl;
    }

    return 0;
}