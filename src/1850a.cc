#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];

        std::sort(a.begin(), a.end());

        if (a[1] + a[2] >= 10) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
