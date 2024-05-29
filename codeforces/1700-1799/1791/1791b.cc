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
        int n, nx = 0, ny = 0;
        cin >> n;
        string s;
        cin >> s;
        bool ans = false;
        for (const char &ch: s) {
            if (ch == 'L') {
                nx--;
            }
            if (ch == 'R') {
                nx++;
            }
            if (ch == 'U') {
                ny++;
            }
            if (ch == 'D') {
                ny--;
            }
            if (nx == 1 && ny == 1) {
                ans = true;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}