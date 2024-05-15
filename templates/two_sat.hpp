#ifndef TOW_SAT_H
#define TOW_SAT_H

#include <bits/stdc++.h>

using namespace std;

#define vec  vector

class TowSat {
public:
    stack<int> stk;
    vec<vec<int>> g;
    int n, nn, clk = 0, n_scc = 0;
    vec<int> dfn, low, scc, ins, vis;

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


#endif // TOW_SAT_H