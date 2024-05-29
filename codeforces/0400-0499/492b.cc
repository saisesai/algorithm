#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    double l;
    vector<double> a;

    cin >> n >> l;
    a.resize(n, 0.0);
    for (int i = 0; i < n; i++) cin >> a[i];

    double d_max = 0.0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++) {
        double d = (a[i + 1] - a[i]) / 2;
        if (d > d_max) d_max = d;
    }
    if (a[0] - 0.0 > d_max) d_max = a[0] - 0.0;
    if (l - a[n - 1] > d_max) d_max = l - a[n - 1];

    cout << fixed << setprecision(9) << d_max << endl;

    return 0;
}