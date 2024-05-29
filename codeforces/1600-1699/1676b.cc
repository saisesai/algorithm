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

        int res(0);
        for_each(a.begin(), a.end(), [&](int &ai) -> void {
            res += ai - a[0];
        });

        cout << res << endl;
    }

    return 0;
}