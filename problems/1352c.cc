#include <iostream>

using namespace std;

int off(int n, int k) {
    if (k / n == 0) return 0;
    return k / n + off(n, (k / n) + (k % n));
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        cout << k + off(n, k) << endl;
    }

    return 0;
}