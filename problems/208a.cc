#include <string>
#include <iostream>

using namespace std;

size_t start(0);
string input, ans;

int main() {
    cin >> input;

    for (size_t found = input.find("WUB"); found != string::npos; found = input.find("WUB", start)) {
        if (start != found) {
            ans += string(input.begin() + start, input.begin() + found) + " ";
        }
        start = found + string("WUB").length();
    }
    if (start != input.length()) {
        ans += string(input.begin() + start, input.end()) + " ";
    }

    cout << string(ans.begin(), ans.end() - 1) << endl;

    return 0;
}