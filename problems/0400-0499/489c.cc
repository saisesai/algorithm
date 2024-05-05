#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

bool is0(const string &str) {
    return std::find_if(str.begin(), str.end(), [](const char &ch) -> bool {
        return ch != '0';
    }) == str.end();
}

int main() {
    int m, s;
    cin >> m >> s;

    if (9 * m < s) {
        cout << "-1 -1" << endl;
        return 0;
    }

    string ans_max;
    for (int i = 0; i < m; i++) {
        for (int j = 9; j >= 0; j--) {
            if (s >= j) {
                s -= j;
                ans_max += to_string(j);
                break;
            }
        }
    }
    if (m > 1 && is0(ans_max)) {
        cout << "-1 -1" << endl;
        return 0;
    }

    string ans_min = ans_max;
    reverse(ans_min.begin(), ans_min.end());
    if (ans_min[0] == '0' && !is0(ans_max)) {
        ans_min[0] = '1';
        for (int i = 1; i < ans_min.length(); i++) {
            if (ans_min[i] - '0' > 0) {
                ans_min[i]--;
                break;
            }
        }
    }

    cout << ans_min << " " << ans_max << endl;

    return 0;
}