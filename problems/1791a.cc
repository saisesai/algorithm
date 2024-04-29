#include <string>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    string cf = "codeforces";
    for (int i = 0; i < t; i++) {
        char ch;
        cin >> ch;

        if (cf.find(ch) != string::npos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}