#include <vector>
#include <iostream>

using namespace std;

int n;
vector<int> p, ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    p.resize(n, 0);
    ans.resize(n, 0);
    for (int i = 0; i < n; i++) cin >> p[i];

    for (int i = 0; i < n; i++) ans[p[i] - 1] = i + 1;

    for(const int& i: ans) cout << i << " ";

    cout << endl;

    return 0;
}