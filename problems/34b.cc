#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    sort(a.begin(), a.end());
    int res = 0;
    int pick = 0;
    while (a[pick] < 0) {
        if (pick >= m) break;
        res += a[pick];
        pick++;
    }

    cout << -res << endl;

    return 0;
}