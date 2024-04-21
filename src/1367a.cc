#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        string input;
        stringstream ss;

        cin >> input;

        ss << input[0];
        for (int i = 1; i < input.length() - 1; i += 2) {
            ss << input[i];
        }
        ss << *input.rbegin();

        cout << ss.str() << endl;
    }

    return 0;
}