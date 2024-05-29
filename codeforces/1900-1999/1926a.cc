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
        char ch;
        int n_a = 0;
        for (int i = 0; i < 5; i++) {
            cin >> ch;
            if (ch == 'A') {
                n_a++;
            }
        }
        int n_b = 5 - n_a;
        cout << (n_a > n_b ? "A" : "B") << endl;
    }

    return 0;
}