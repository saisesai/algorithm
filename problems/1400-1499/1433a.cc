#include <string>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    int record[4] = {1, 3, 6, 10};

    while (t--) {
        string str;
        cin >> str;

        cout << 10 * (str[0] - '1') + record[str.length() - 1] << endl;
    }

    return 0;
}