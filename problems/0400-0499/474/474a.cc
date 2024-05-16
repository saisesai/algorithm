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

    char kbd[3][10] = {
            {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
            {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'},
            {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}
    };

    char dir;
    cin >> dir;

    int off = dir == 'L' ? 1 : -1;

    string s;
    cin >> s;

    string ans;
    for (const char &ch: s) {
        bool f = false;
        for (auto &row: kbd) {
            if (f) {
                break;
            }
            for (int j = 0; j < 10; j++) {
                if (ch == row[j]) {
                    ans += row[j + off];
                    f = true;
                    break;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}