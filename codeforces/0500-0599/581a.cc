#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }

    cout << a << " " << (b - a) / 2 << endl;

    return 0;
}
