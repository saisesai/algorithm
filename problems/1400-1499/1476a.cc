#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (n <= k) cout << k / n + (k % n ? 1 : 0) << endl;
        else cout << 1 + (n % k ? 1 : 0) << endl;
    }

    return 0;
}