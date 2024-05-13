#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<double> a(k + 1), b(k + 1);
        a[0] = 0;
        b[0] = 0;
        for (int i = 1; i < k + 1; i++) {
            cin >> a[i];
        }
        for (int i = 1; i < k + 1; i++) {
            cin >> b[i];
        }
        while (q--) {
            int x;
            cin >> x;

            double ans;
            size_t i = distance(a.begin(), upper_bound(a.begin(), a.end(), x)) - 1;
            if (x == a[i]) {
                ans = b[i];
            } else {
                ans = b[i] + (x - a[i]) * (b[i + 1] - b[i]) / (a[i + 1] - a[i]);
            }

            cout << int(ans) << " ";
        }
        cout << endl;
    }

    return 0;
}