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

    string s;
    cin >> s;
    int n;
    cin >> n;
    while (n--) {
        int l, r, k;
        cin >> l >> r >> k;
        l--;
        r--;
        int len = r - l + 1;
        k = k % len;
        string sn(s);
        for (int i = l; i <= r; i++) {
            if (i - k >= l) {
                sn[i] = s[i - k];
            } else {
                sn[i] = s[r - (k-(i - l))+1];
            }
        }
        s = sn;
    }
    cout << s << endl;

    return 0;
}