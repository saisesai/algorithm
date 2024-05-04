#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n, 0), b(n, 0);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0;
        while (k--) {
            if (a[i] >= b[n - i - 1]) break;
            swap(a[i], b[n - i - 1]);
            i++;
        }

        cout << accumulate(a.begin(), a.end(), 0) << endl;
    }

    return 0;
}