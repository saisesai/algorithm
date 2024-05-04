#include <vector>
#include <iostream>

using namespace std;

int n, a_max(0), a_min(100), a_max_i, a_min_i;
vector<int> a;

int main() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (a[i] > a_max) {
            a_max_i = i;
            a_max = a[i];
        }
        if (a[i] <= a_min) {
            a_min_i = i;
            a_min = a[i];
        }
    }

    cout << a_max_i + (n - a_min_i - 1) - (a_min_i < a_max_i ? 1 : 0) << endl;

    return 0;
}