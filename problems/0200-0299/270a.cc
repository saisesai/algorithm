#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << (2 * n % (180 - n) ? "NO" : "YES") << endl;
    }

    return 0;
}