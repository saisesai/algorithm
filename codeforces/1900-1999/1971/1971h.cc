// Author Sai (saisesai@qq.com)

#include <bits/stdc++.h>

using namespace std;

#define vec vector

#define fast_io() do{ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);}while(0)

class TowSat {
public:
    int n;
    int nn;
    int clk = 0;
    int n_scc = 0;
    vec<int> dfn;
    vec<int> low;
    vec<int> scc;
    vec<bool> ins;
    vec<bool> vis;
    stack<int> stk;
    vec<vec<int>> g;

    explicit TowSat(int n) {
        this->n = n;
        this->nn = n * 2 + 1;
        dfn.resize(nn, 0);
        low.resize(nn, 0);
        scc.resize(nn, 0);
        ins.resize(nn, false);
        vis.resize(nn, false);
        g.resize(nn);
    }

    // if (-a/+a) must (-b/+b)
    void add(int a, int b) {
        this->g[a + n].emplace_back(b + n);
    }

    void dfs(int now) {
        stk.push(now);
        vis[now] = ins[now] = true;
        dfn[now] = low[now] = ++clk;
        for (const int &to: g[now]) {
            if (!vis[to]) {
                dfs(to);
                low[now] = min(low[now], low[to]);
            } else if (ins[to]) {
                low[now] = min(low[now], low[to]);
            }
        }
        if (dfn[now] == low[now]) {
            n_scc++;
            int to;
            do {
                to = stk.top();
                stk.pop();
                ins[to] = false;
                scc[to] = n_scc;
            } while (dfn[to] != low[to]);
        }
    }

    bool sat() {
        for (int i = 0; i < vis.size(); i++) {
            if (!vis[i] && i != n) {
                dfs(i);
            }
        }
        bool res = true;
        for (int i = 1; i <= n; ++i) {
            if (scc[n - i] == scc[n + i]) {
                res = false;
            }
        }
        return res;
    }
};

int main() {
    fast_io();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vec<vec<int>> grid(3, vec<int>(n, 0));
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        TowSat tow_sat(n);
        for (int i = 0; i < n; i++) {
            tow_sat.add(-grid[0][i], grid[1][i]);
            tow_sat.add(-grid[1][i], grid[0][i]);
            tow_sat.add(-grid[0][i], grid[2][i]);
            tow_sat.add(-grid[2][i], grid[0][i]);
            tow_sat.add(-grid[1][i], grid[2][i]);
            tow_sat.add(-grid[2][i], grid[1][i]);
        }

        cout << (tow_sat.sat() ? "YES" : "NO") << endl;
    }

    return 0;
}