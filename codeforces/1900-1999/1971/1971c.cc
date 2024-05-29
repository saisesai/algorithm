#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a > b) {
            swap(a, b);
        }
        if (c > d) {
            swap(c, d);
        }
        vector<int> up, down;
        for (int i = 1; i <= a; i++) {
            up.emplace_back(i);
        }
        for (int i = b; i <= 12; i++) {
            up.emplace_back(i);
        }
        for (int i = a; i <= b; i++) {
            down.emplace_back(i);
        }
        if ((find(up.begin(), up.end(), c) != up.end()
             && find(down.begin(), down.end(), d) != down.end())
            || (find(up.begin(), up.end(), d) != up.end()
                && find(down.begin(), down.end(), c) != down.end())
                ) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}