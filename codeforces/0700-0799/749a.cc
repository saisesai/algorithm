#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int m = n / 2;

    cout << m << endl;
    for (int i = 0; i < m - 1; i++) {
        cout << 2 << " ";
    }
    cout << (n % 2 ? 3 : 2) << endl;

    return 0;
}