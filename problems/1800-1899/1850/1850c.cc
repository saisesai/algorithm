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
        string ans;
        for (int i = 0; i < 8; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < 8; j++) {
                if (s[j] != '.') {
                    ans += s[j];
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}