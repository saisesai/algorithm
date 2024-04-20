#include <sstream>
#include <iostream>

using namespace std;

int n;
stringstream ss;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2) {
            ss << "I hate ";
        } else {
            ss << "I love ";
        }
        if (i == n) {
            ss << "it";
        } else {
            ss << "that ";
        }
    }
    cout << ss.str() << endl;
    return 0;
}
