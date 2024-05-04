#include <iostream>

using namespace std;

uint64_t n, k, ans = 0;

int main() {
    cin >> n >> k;

    // odd segment
    uint64_t odd_num = n % 2 ? n / 2 + 1 : n / 2;
    if (k <= odd_num) {
        ans = 1 + 2 * (k - 1);
    } else { // even segment
        k = k - odd_num;
        ans = 2 * k;
    }

    cout << ans;

    return 0;
}
