#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        if (str == "abc") {
            cout << "YES" << endl;
            continue;
        }

        swap(str[0], str[1]);
        if (str == "abc") {
            cout << "YES" << endl;
            continue;
        }
        swap(str[0], str[1]);

        swap(str[1], str[2]);
        if (str == "abc") {
            cout << "YES" << endl;
            continue;
        }
        swap(str[1], str[2]);

        swap(str[0], str[2]);
        if (str == "abc") {
            cout << "YES" << endl;
            continue;
        }
        swap(str[0], str[2]);

        cout << "NO" << endl;
    }

    return 0;
}