#include <vector>
#include <iostream>

using namespace std;

int main() {
    uint64_t n, m, t(0), prev(1);
    vector<int> a;

    cin >> n >> m;
    a.resize(m);
    for (uint64_t i = 0; i < m; i++) cin >> a[i];

    for (uint64_t i = 0; i < m; i++) {
        if (a[i] < prev) {
            t += n - prev + a[i];
        } else {
            t += a[i] - prev;
        }
        prev = a[i];
    }

    cout << t << endl;

    return 0;
}