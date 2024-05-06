#include <vector>
#include <numeric>
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
        a[0] += 1;

        int product = 1;
        for (int &ai: a) product *= ai;
        cout << product << endl;
    }

    return 0;
}

