#include <iostream>

using namespace std;

bool is_prime(int n) {
    bool rst = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            rst = false;
            break;
        }
    }
    return rst;
}

int main() {
    int n, a, b;

    cin >> n;

    if (n % 2) {
        a = n / 2;
        b = n / 2 + 1;
    } else {
        a = b = n / 2;
    }

    while (is_prime(a) || is_prime(b)){
        a -= 1;
        b += 1;
    }

    cout << a << " " << b << endl;

    return 0;
}
