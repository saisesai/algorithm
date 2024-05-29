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

int main() {
    fast_io();

    int a[9];
    int b[8];
    for (int &ai: a) {
        cin >> ai;
    }
    for (int &bi: b) {
        cin >> bi;
    }

    int a_sum = accumulate(a, a + 9, 0);
    int b_sum = accumulate(b, b + 8, 0);

    cout << a_sum - b_sum + 1 << endl;

    return 0;
}