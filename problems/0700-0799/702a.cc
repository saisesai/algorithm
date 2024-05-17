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

    int n;
    cin >> n;
    int x, x_prev, l(1), l_max(1);
    cin >> x_prev;
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x > x_prev) {
            l++;
            l_max = max(l_max, l);
        } else {
            l = 1;
        }
        x_prev = x;
    }

    cout << l_max << endl;

    return 0;
}