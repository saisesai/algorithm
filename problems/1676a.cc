#include <string>
#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        vector<int> v(6);

        cin >> str;

        for (int j = 0; j < 6; j++) v[j] = str[j] - '0';

        if (accumulate(v.begin(), v.begin() + 3, 0) == accumulate(v.begin() + 3, v.begin() + 6, 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
