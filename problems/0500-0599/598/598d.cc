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

#define maxm 1001
#define maxn 1001

struct Pos {
    int row = 0;
    int col = 0;
};

bool vis[maxn][maxm];
char museum[maxn][maxm];
Pos root[maxn][maxm];
int ans[maxn][maxm];

int main() {
    fast_io();

    int n, m, k;
    cin >> n >> m >> k;
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= m; col++) {
            cin >> museum[row][col];
        }
    }
    vec<Pos> start(k);
    for (int i = 0; i < k; i++) {
        cin >> start[i].row >> start[i].col;
    }

    for (const Pos &sp: start) {
        int na = 0;
        function<void(int, int)> dfs = [&](int row, int col) -> void {
            if (vis[row][col]) {
                return;
            }
            if (museum[row][col] == '*') {
                na++;
                return;
            }
            vis[row][col] = true;
            root[row][col] = sp;
            dfs(row, col - 1);
            dfs(row, col + 1);
            dfs(row - 1, col);
            dfs(row + 1, col);
        };
        if (!vis[sp.row][sp.col]) {
            dfs(sp.row, sp.col);
            ans[sp.row][sp.col] = na;
        }
        int row = root[sp.row][sp.col].row;
        int col = root[sp.row][sp.col].col;
        cout << ans[row][col] << endl;
    }

    return 0;
}
