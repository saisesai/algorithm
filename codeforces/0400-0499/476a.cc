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

    int n, m;
    cin >> n >> m;

    if (n < m) {
        cout << -1 << endl;
        return 0;
    }

    if (n % 2) {
        n++;
    }


    cout << ((n / 2 / m) + (n / 2 % m ? 1 : 0)) * m << endl;

    return 0;
}