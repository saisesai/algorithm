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

#define n_max 1000'000'000

int main() {
    fast_io();

    int t;
    cin >> t;

    vec<i64> pow2;
    i64 x = 1;
    do {
        pow2.emplace_back(x);
        x *= 2;
    } while (x <= n_max);

    while (t--) {
        i64 n;
        cin >> n;

        i64 sum = (1 + n) * n / 2;
        for (const i64 &p: pow2) {
            if (p <= n) {
                sum -= p * 2;
            } else {
                break;
            }
        }

        cout << sum << endl;
    }

    return 0;
}