#include <vector>
#include <numeric>
#include <iomanip>
#include <iostream>

using namespace std;

int n;
vector<double> p;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    p.resize(n, 0.0);
    for (int i = 0; i < n; i++) cin >> p[i];

    double sum = accumulate(p.begin(), p.end(), 0.0);

    cout<< fixed << setprecision(16) << sum / (n * 100) * 100 << endl;

    return 0;
}