#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, flag(0);
    vector<int> y;

    cin >> n >> k;
    y.resize(n);
    for (int i = 0; i < n; i++) cin >> y[i];

    sort(y.begin(), y.end());
    for (int i = 0; i < n; i++) {
        if (5 - y[i] >= k) flag = i + 1;
    }

    cout << flag / 3 << endl;

    return 0;
}
