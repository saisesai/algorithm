#include <map>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    vector<int> a;

    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // 1 ≤ a_i ≤ 10^4
    for (int i = 0; i < n; i++) {
        map<int, int> am;
        if (a[i] % 10) am[1] = a[i] % 10;
        if ((a[i] % 100) / 10) am[10] += (a[i] % 100) / 10;
        if ((a[i] % 1000) / 100) am[100] += (a[i] % 1000) / 100;
        if ((a[i] % 10000) / 1000) am[1000] += (a[i] % 10000) / 1000;
        if (a[i] / 10000) am[10000] += a[i] / 10000;
        cout << count_if(am.begin(), am.end(),
                         [](pair<const int, int> &p) -> bool { return p.second != 0; }) << endl;
        for_each(am.begin(), am.end(), [](pair<const int, int> &p) -> void {
            cout << p.first * p.second << " ";
        });
        cout << endl;
    }

    return 0;
}