#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n, ans(0);
    vector<pair<int, int>> a;

    cin >> n;
    a.resize(n, {0, 0});
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (a[i].first == a[j].second) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}