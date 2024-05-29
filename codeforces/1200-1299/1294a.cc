#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int mx = max({a, b, c});
        int pad = (mx - a) + (mx - b) + (mx - c);
        if (pad > n || (n - pad) % 3 != 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}