#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &ai: a) cin >> ai;
    int m;
    cin >> m;
    vector<int> q(m);
    for (int &qi: q) cin >> qi;

    vector<int> table(n);
    table[0] = 1;
    for (int i = 1; i < n; i++) {
        table[i] = table[i - 1] + a[i - 1];
    }

    for (const int &qi: q) {
        cout << upper_bound(table.begin(), table.end(), qi) - table.begin() << endl;
    }

    return 0;
}
