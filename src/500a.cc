#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 1; i < n; i++) cin >> a[i];

    vector<int> res;
    int now_at = 1;
    res.emplace_back(1);
    while (now_at < n) {
        now_at += a[now_at];
        res.emplace_back(now_at);
    }

    cout << (find(res.begin(), res.end(), t) != res.end() ? "YES" : "NO") << endl;

    return 0;
}