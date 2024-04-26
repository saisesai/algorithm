#include <string>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        string str1(str.begin(), str.begin() + int(str.length() / 2));
        string str2(str.begin() + int(str.length() / 2), str.end());

        cout << (str1 == str2 ? "YES" : "NO") << endl;
    }

    return 0;
}