#include <iostream>

using namespace std;

int main() {
    int n, k, ans(0);
    cin >> n >> k;

    int time_rem = 240 - k;
    for (int i = 1; i <= n; i++) {
        if (i * 5 > time_rem) {
            break;
        }
        time_rem -= i * 5;
        ans++;
    }

    cout << ans << endl;

    return 0;
}
