#include <iostream>

using namespace std;

int n, ans, p, q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p >> q;
        if (q - p >= 2) ans++;
    }

    cout << ans << endl;

    return 0;
}