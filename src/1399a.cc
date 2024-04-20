#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t, n;
    vector<int> a;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        a.resize(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        bool can = true;
        for (int j = 1; j < n; j++) {
            if (a[j] - a[j - 1] > 1) {
                can = false;
                break;
            }
        }
        cout << (can ? "YES" : "NO") << endl;
    }

    return 0;
}