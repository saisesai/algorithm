#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;

        if (n % x == y) {
            cout << n << endl;
            continue;
        }
        if (n % x > y) {
            cout << n - (n % x - y) << endl;
        }
        if (n % x < y) {
            cout << n - x + (y - n % x) << endl;
        }
    }

    return 0;
}