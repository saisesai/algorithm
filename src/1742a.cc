#include <array>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        array<int, 3> input{};
        cin >> input[0] >> input[1] >> input[2];
        sort(input.begin(), input.end());
        if (input[0] + input[1] == input[2]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}