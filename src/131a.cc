#include <string>
#include <iostream>

using namespace std;

string str;

int main() {
    cin >> str;

    bool cond1 = true;
    for (const char &ch: str) {
        if (islower(ch)) {
            cond1 = false;
            break;
        }
    }

    bool cond2 = true;
    if (islower(str[0])) {
        for (int i = 1; i < str.length(); i++) {
            if (islower(str[i])) {
                cond2 = false;
                break;
            }
        }
    } else {
        cond2 = false;
    }

    if (cond1) {
        for (char &ch: str)
            ch = (char) tolower(ch);
    }

    if (cond2) {
        if (islower(str[0])) str[0] = (char) toupper(str[0]);
        for (int i = 1; i < str.length(); i++)
            if (isupper(str[i]))
                str[i] = (char) tolower(str[i]);
    }

    cout << str << endl;

    return 0;
}
