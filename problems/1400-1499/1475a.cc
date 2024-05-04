#include <iostream>

using namespace std;

int main() {
    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        uint64_t x;

        cin >> x;

        bool ans = true;
        while (x > 0) {
            if (x == 1) {
                ans = false;
                break;
            }
            if (x % 2 != 0) {
                ans = true;
                break;
            }
            x /= 2;
        }

        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}