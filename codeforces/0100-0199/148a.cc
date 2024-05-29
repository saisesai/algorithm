#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int k, l, m, n, d;
vector<int> v;

int main() {
    cin >> k >> l >> m >> n >> d;
    v.resize(d, 0);

    for (int i = k; i <= d; i += k) v[i - 1] = 1;
    for (int i = l; i <= d; i += l) v[i - 1] = 1;
    for (int i = m; i <= d; i += m) v[i - 1] = 1;
    for (int i = n; i <= d; i += n) v[i - 1] = 1;

    cout << count(v.begin(), v.end(), 1) << endl;

    return 0;
}