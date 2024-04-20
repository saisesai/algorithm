#include <vector>
#include <iostream>

using namespace std;

template<typename T>
T int_sqrt(T n) {
    T x = n;
    T y = 1;
    while (x > y) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vector<uint64_t> a;

    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (const uint64_t &a_i: a) {
        auto k = int_sqrt<uint64_t>(a_i);
        if (k * k == a_i && ([](uint64_t x) -> bool {
            if (x == 1) return false;
            for (uint64_t i = 2; i * i <= x; i++) {
                if (x % i == 0) return false;
            }
            return true;
        })(k)) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }

    return 0;
}