#include <string>
#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (i == 0 && str[0] == '9') continue;
        else if (str[i] >= '5') str[i] = char('9' - str[i] + '0');
    }

    cout << str << endl;

    return 0;
}