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
    if (n % 2) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        p[i] = i;
    }

    for (int i = 1; i < n; i += 2) {
        swap(p[i], p[i + 1]);
    }

    for (int i = 1; i <= n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;

    return 0;
}