#include <iostream>

using namespace std;

bool is_prime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int prime_after(int x) {
    int i = x + 1;
    while (!is_prime(i)) i++;
    return i;
}

int main() {
    int a, b;
    cin >> a >> b;

    if (is_prime(a) && prime_after(a) == b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}