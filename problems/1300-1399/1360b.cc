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

        int v_min = INT_MAX;
        for (int i = 1; i < a.size(); i++) {
            int v = abs(a[i] - a[i - 1]);
            if (v < v_min) v_min = v;
        }

        cout << v_min << endl;
    }

    return 0;
}
