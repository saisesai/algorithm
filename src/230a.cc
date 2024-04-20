#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int s, n;
    vector<pair<int, int>> dragons;

    cin >> s >> n;
    dragons.resize(n);
    for (int i = 0; i < n; i++) cin >> dragons[i].first >> dragons[i].second;

    sort(dragons.begin(), dragons.end(), [](pair<int, int> &a, pair<int, int> &b) -> bool {
        if (a.first != b.first) {
            return a.first < b.first;
        } else {
            return a.second > b.second;
        }
    });

    bool duel_win(true);
    for (pair<int, int> &d: dragons) {
        if (s <= d.first) {
            duel_win = false;
            break;
        }
        s += d.second;
    }

    cout << (duel_win ? "YES" : "NO") << endl;

    return 0;
}