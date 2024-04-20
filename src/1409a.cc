#include <cmath>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie();

    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, d, ans;
        cin >> a >> b;
        d = abs(a - b);
        ans = d / 10;
        if (d % 10) ans++;
        cout << ans << endl;
    }

    return 0;
}