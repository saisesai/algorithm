#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vector<int> a, l2r, r2l, res;
    stack<pair<int, int>> mono_stack;

    cin >> n;
    a.resize(n, 0);
    l2r.resize(n, 0);
    r2l.resize(n, 0);
    for (int &a_i: a) cin >> a_i;
    res.resize(n, *min_element(a.begin(), a.end()));

    for (int pick = 0; pick < n; pick++) {
        while (!mono_stack.empty() && a[pick] < mono_stack.top().second) {
            l2r[mono_stack.top().first] = pick - mono_stack.top().first;
            mono_stack.pop();
        }
        mono_stack.emplace(pick, a[pick]);
    }

    while (!mono_stack.empty()) mono_stack.pop();
    for (int pick = n - 1; pick >= 0; pick--) {
        while (!mono_stack.empty() && a[pick] < mono_stack.top().second) {
            r2l[mono_stack.top().first] = mono_stack.top().first - pick;
            mono_stack.pop();
        }
        mono_stack.emplace(pick, a[pick]);
    }

    for (int i = 0; i < n; i++) {
        if (l2r[i] == 0) l2r[i] = n - i;
        if (r2l[i] == 0) r2l[i] = i + 1;
        int range = l2r[i] + r2l[i] - 1;
        res[range - 1] = max(res[range - 1], a[i]);
    }

    for (int i = n - 1; i > 0; i--) {
        if (res[i - 1] < res[i]) res[i - 1] = res[i];
    }

    for (int &res_i: res)
        cout << res_i << " ";
    cout << endl;

    return 0;
}