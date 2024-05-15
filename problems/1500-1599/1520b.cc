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

        string ns = to_string(n);
        std::fill(ns.begin(), ns.end(), ns[0]);
        int a = ns[0] - '0';
        int x = stoi(ns);
        cout << 9 * (ns.length() - 1) + (n < x ? a - 1 : a) << endl;
    }

    return 0;
}