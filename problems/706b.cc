#include <map>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    vector<int> x;
    map<int, int> record;

    cin >> n;
    x.resize(n);
    for (int &xi: x) cin >> xi;

    sort(x.begin(), x.end());
    for (int i = 0; i < n; i++) {
        record[x[i]] = i + 1;
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        int v, ans;
        cin >> v;
        if (v < record.begin()->first) {
            ans = 0;
        } else if (v >= record.rbegin()->first) {
            ans = n;
        } else {
            ans = (--record.upper_bound(v))->second;
        }
        cout << ans << endl;
    }


    return 0;
}