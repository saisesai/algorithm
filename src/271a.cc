#include <iostream>

using namespace std;

int y;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> y;

    while (++y) {
        int a = (y % 10) / 1;
        int b = (y % 100) / 10;
        int c = (y % 1000) / 100;
        int d = (y % 10000) / 1000;
        if (a != b && a != c && a != d && b != c && b != d && c != d) break;
    }

    cout << y;

    return 0;
}