#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> a(3);
    while (t--) {
        cin >> a[0] >> a[1] >> a[2];
        sort(a.begin(), a.end());

        cout << (a[0] != a[1] ? a[0] : a[2]) << endl;
    }

    return 0;
}