#include <iostream>

using namespace std;

int main() {
    int m;

    cin >> m;

    for (int i = 0; i < m; i++) {
        int n;
        int a, ia(0), na(0), ib(0), nb(0);

        cin >> n;
        for (int j = 0; j < n; j++) {
            int x;

            cin >> x;

            if (j == 0) {
                a = x;
                ia = 1;
                na = 1;
                continue;
            }

            if (x == a) {
                ia = j + 1;
                na++;
            } else {
                ib = j + 1;
                nb++;
            }
        }

        cout << (na > nb ? ib : ia) << endl;
    }

    return 0;
}
