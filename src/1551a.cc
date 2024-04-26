#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int c = n / 3;
        int c1 = c;
        int c2 = c;
        if (n % 3 == 1) c1++;
        if (n % 3 == 2) c2++;

        cout << c1 << " " << c2 << endl;
    }

    return 0;
}