#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &ai: a) cin >> ai;

        sort(a.begin(), a.end());

        bool res = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                res = false;
                break;
            }
        }
        cout << (res ? "YES" : "NO") << endl;
    }

    return 0;
}