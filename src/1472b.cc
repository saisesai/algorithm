#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &item: a) cin >> item;

        int a_sum = accumulate(a.begin(), a.end(), 0);
        if (a_sum % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        int n1 = int(count(a.begin(), a.end(), 1));
        int n2 = int(count(a.begin(), a.end(), 2));

        if (n2 % 2 == 0) {
            if (n1 % 2 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            continue;
        }

        if (n1 >= 2 && (n1 - 2) % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
