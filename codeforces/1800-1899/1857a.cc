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
        for (int &ai: a)cin >> ai;

        size_t n_odd = count_if(a.begin(), a.end(), [](const int &ai) -> bool {
            return ai % 2 == 1;
        });

        if (n_odd % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
