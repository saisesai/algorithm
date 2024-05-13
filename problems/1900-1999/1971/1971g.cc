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
        vec<int> a(n);

        hmap<int, vec<rw<int>>> rec;
        for (int &ai: a) {
            cin >> ai;
            rec[ai >> 2].emplace_back(ai);
        }

        for (auto &r: rec) {
            vec<int> vt(r.second.begin(), r.second.end());
            std::sort(vt.begin(), vt.end());
            for (int i = 0; i < vt.size(); i++) {
                r.second[i].get() = vt[i];
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}