#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main() {
    vector<int> calories(4);
    for (auto &calorie: calories)cin >> calorie;

    string game;
    cin >> game;

    int res(0);
    for (auto &ch: game) {
        res += calories[ch - '1'];
    }

    cout << res << endl;

    return 0;
}