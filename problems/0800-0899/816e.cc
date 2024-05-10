#include <vector>
#include <iostream>
#include <functional>

using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    vector<int> c(n + 1, 0);
    vector<int> d(n + 1, 0);
    vector<int> x(n + 1, 0);
    vector<vector<int>> record(n + 1, vector<int>());
    cin >> c[1] >> d[1];
    for (int i = 2; i <= n; i++) {
        cin >> c[i] >> d[i] >> x[i];
        record[x[i]].emplace_back(i);
    }

    vector<int> goods(n + 1);

    function<void(int)> dfs = [&](int now) -> void {
        goods[now] = 1;
        
    };


    return 0;
}