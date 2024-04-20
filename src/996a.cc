#include <iostream>

using namespace std;

int n, ans(0);

int main() {
    cin >> n;

    if (n != 0) {
        ans += n / 100;
        n = n % 100;
    }
    if (n != 0) {
        ans += n / 20;
        n = n % 20;
    }
    if (n != 0) {
        ans += n / 10;
        n = n % 10;
    }
    if (n != 0) {
        ans += n / 5;
        n = n % 5;
    }
    if (n != 0) {
        ans += n / 1;
        n = n % 1;
    }

    cout << ans << endl;

    return 0;
}
