#include <vector>
#include <iostream>
#include <algorithm>

//#include "helpers.hpp"

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &ai: a) cin >> ai;
    int m;
    cin >> m;
    vector<int> b(m);
    for (int &bi: b) cin >> bi;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<vector<int>> table(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (abs(a[j] - b[i]) <= 1) {
                table[i][j] = 1;
            } else {
                table[i][j] = 0;
            }
        }
    }
//    show_vec_2d(table);

    int pairs(0), j(0);
    for (size_t i = 0; i < m; i++) {
        if (j < n && find(table[i].begin() + j, table[i].end(), 1) == table[i].end()) continue;
        while (j < n) {
            if (table[i][j] == 1) {
                pairs += 1;
                j++;
                break;
            }
            j++;
        }
    }

    cout << pairs << endl;

    return 0;
}