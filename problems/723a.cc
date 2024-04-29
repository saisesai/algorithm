#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> a(3, 0);

    cin >> a[0] >> a[1] >> a[2];

    sort(a.begin(), a.end());

    cout << a[1] - a[0] + a[2] - a[1] << endl;

    return 0;
}