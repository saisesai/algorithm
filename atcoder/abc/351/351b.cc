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

    char a[101][101];
    char b[101][101];

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> b[i][j];
        }
    }

    int ai, aj;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] != b[i][j]) {
                ai = i;
                aj = j;
                break;
            }
        }
    }

    cout << ai << " " << aj << endl;

    return 0;
}