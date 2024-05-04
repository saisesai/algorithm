#include <vector>
#include <iostream>

using namespace std;

template<typename T>
T babylonian_sqrt(T n) {
    T x = n;
    T y = 1;
    while (x > y) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

template<typename T>
T vec_sum(const vector<T> &vec) {
    T res = 0;
    for (const T &e: vec) res += e;
    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<uint64_t> a(n);
        for (uint64_t &ai: a) cin >> ai;

        uint64_t sum = vec_sum(a);
        uint64_t root = babylonian_sqrt(sum);
        if (root * root == sum) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}