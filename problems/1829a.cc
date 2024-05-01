#include <string>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    string codeforces = "codeforces";

    while (t--) {
        string input;
        cin >> input;

        int cnt(0);
        for (int i = 0; i < 10; i++) {
            if (input[i] != codeforces[i]) cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}