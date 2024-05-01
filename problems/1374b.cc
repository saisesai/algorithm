#include <iostream>

using namespace std;

int pow_int(int n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res *= n;
    }
    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        uint64_t n;
        cin >> n;

        int step(0);
        while (n != 1) {
            if (n % 6 == 0) {
                n /= 6;
                step++;
            } else if (n % 3 == 0) {
                n *= 2;
                step++;
            } else {
                step = -1;
                break;
            }
        }

        cout << step << endl;
    }

    return 0;
}

