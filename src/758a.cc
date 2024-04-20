#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a_max, ans(0);
    vector<int> a;

    cin >> n;
    a.resize(n);
    for (int &ai: a) cin >> ai;

    a_max = *max_element(a.begin(), a.end());

    for (int &ai: a) ans += a_max - ai;

    cout << ans << endl;

    return 0;
}
