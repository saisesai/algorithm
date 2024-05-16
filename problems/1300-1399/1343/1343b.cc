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

    for (int k = 0; k < t; k++) {
        int n;
        cin >> n;
        vector<int> res;

        if ((n / 2) % 2) {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 2; i <= n; i += 2) {
            res.emplace_back(i);
        }
        for (int i = 1; i <= n; i += 2) {
            res.emplace_back(i);
        }

        int sum = accumulate(res.begin(), res.begin() + n / 2, 0);
        int sp = accumulate(res.begin() + n / 2, res.end(), 0) + *res.rbegin() + 2;
        for (int i = n / 2; i < n; i++) {
            if (res[i] == sp - sum) {
                res[i] = *res.rbegin() + 2;
                break;
            }
        }
        sort(res.begin() + n / 2, res.end());

        cout << "YES" << endl;
        for (int &res_i: res) cout << res_i << " ";
        cout << endl;
    }

    return 0;
}