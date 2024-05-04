#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> a(4);
        for (int &ai: a) cin >> ai;

        int m1 = max(a[0], a[1]);
        int m2 = max(a[2], a[3]);
        if (m1 > m2) swap(m1, m2);

        sort(a.begin(), a.end());

        if (m1 == a[2] && m2 == a[3]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}