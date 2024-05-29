#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    vector<int> puzzles;

    cin >> n >> m;
    puzzles.resize(m);
    for (int i = 0; i < m; i++) cin >> puzzles[i];

    sort(puzzles.begin(), puzzles.end());

    int diff_min(INT_MAX);
    for (int i = 0; i <= m - n; i++) {
        int diff = puzzles[i + n - 1] - puzzles[i];
        if (diff < diff_min) diff_min = diff;
    }

    cout << diff_min << endl;

    return 0;
}
