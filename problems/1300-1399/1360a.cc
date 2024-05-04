#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a > b) swap(a, b);
        int w = (a * 2 > b ? 2 * a : b);

        cout << w * w << endl;
    }

    return 0;
}