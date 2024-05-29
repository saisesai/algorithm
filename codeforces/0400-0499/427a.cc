#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, polices(0), ng(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > 0) {
            polices += x;
        } else {
            if (polices < 1) {
                ng += 1;
            } else {
                polices -= 1;
            }
        }
    }

    cout << ng << endl;

    return 0;
}
