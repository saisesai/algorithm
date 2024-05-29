#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        if (n <= 2) {
            cout << 1 << endl;
            continue;
        }

        n -= 2;
        int floor = 1;
        while (n > 0) {
            n -= x;
            floor += 1;
        }

        cout << floor << endl;
    }

    return 0;
}
