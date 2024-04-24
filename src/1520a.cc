#include <list>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string task;
        cin >> task;

        char prev(0);
        bool ans = true;
        list<char> record;
        for (char &ch: task) {
            if (ch == prev) {
                prev = ch;
                continue;
            }
            if (find(record.begin(), record.end(), ch) == record.end()) {
                record.emplace_back(ch);
                prev = ch;
                continue;
            } else {
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}