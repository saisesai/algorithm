#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int res = 0, rem;
    res += a;
    rem = a;
    while (rem / b) {
        res += rem / b;
        rem = rem % b + rem / b;
    }

    cout << res << endl;

    return 0;
}