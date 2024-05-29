#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, div;

        cin >> x;

        if (x <= 1399) div = 4;
        else if (x <= 1599) div = 3;
        else if (x <= 1899) div = 2;
        else div = 1;

        cout << "Division " << div << endl;
    }

    return 0;
}