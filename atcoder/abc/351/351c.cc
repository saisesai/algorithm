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

    int n;
    cin >> n;

    vec<int> seq;
    seq.reserve(n);

    for (int i = 0; i < n; i++) {
        int ball;
        cin >> ball;
        seq.push_back(ball);

        while (true) {
            // cond1
            if (seq.size() <= 1) {
                break;
            }
            // cond2
            u64 last = seq.size() - 1;
            if (seq[last] != seq[last - 1]) {
                break;
            }
            // cond3
            seq[last - 1]++;
            seq.pop_back();
        }
    }

    cout << seq.size() << endl;

    return 0;
}
