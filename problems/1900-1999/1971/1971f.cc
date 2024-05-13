#include <bits/stdc++.h>

using namespace std;

#define f32 float
#define f64 double
#define i32 int32_t
#define i64 int64_t
#define u32 uint32_t
#define u64 uint64_t

template<typename T>
T babylonian_sqrt(T n) {
    T x = n;
    T y = 1;
    while (x > y) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        u64 r;
        cin >> r;
        u64 ans = 0;
        u64 bl = r * r;
        u64 bh = (r + 1) * (r + 1);
        for (u64 i = 1; i <= r; i++) {
            for (u64 j = babylonian_sqrt(bh - i * i); j > 0; j--) {
                u64 dd = i * i + j * j;
                if (dd >= bl && dd < bh) {
                    ans++;
                }
                if (dd < bl) {
                    break;
                }
            }
        }
        cout << ans * 4 + 4 << endl;
    }

    return 0;
}