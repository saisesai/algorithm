#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        const char *ans = "NONE";
        if (a < b && b < c) ans = "STAIR";
        if (a < b && b > c) ans = "PEAK";

        cout << ans << endl;
    }

    return 0;
}