#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 0) {
        cout << n << endl;
        return 0;
    }

    int a = n / 10;
    int b = n / 100 * 10 + n % 10;

    cout << (a > b ? a : b) << endl;

    return 0;
}