#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b, c;

        cin >> a >> b >> c;

        if (c == a + b) cout << "+" << endl;
        else cout << "-" << endl;
    }

    return 0;
}