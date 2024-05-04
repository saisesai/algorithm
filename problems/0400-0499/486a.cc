#include <iostream>

using namespace std;

uint64_t n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2;
    } else {
        cout << "-" << (n / 2 + 1);
    }

    return 0;
}
