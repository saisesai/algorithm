#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int n, sum = 0, ans = 0, now = 0;
vector<int> a;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    a.resize(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end(), [](int x, int y) { return x > y; });

    for (int i = 0; i < n; i++) {
        now += a[i];
        ans += 1;
        if (now > sum / 2) break;
    }

    cout << ans << endl;

    return 0;
}
