#include <tuple>
#include <vector>
#include <iostream>

using namespace std;

int t;
vector<tuple<int, int, int>> ab;

int main() {
    cin >> t;
    ab.resize(t, {0, 0, 0});
    for (int i = 0; i < t; i++) cin >> get<0>(ab[i]) >> get<1>(ab[i]);

    for (auto &abi: ab) {
        auto &a = get<0>(abi), &b = get<1>(abi), &ans = get<2>(abi);
        ans = (a % b) ? b - (a % b) : 0;
    }

    for (auto &abi: ab) {
        cout << get<2>(abi) << endl;
    }

    return 0;
}