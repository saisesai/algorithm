#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    vector<int> a;

    cin >> n;
    a.resize(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int &i: a) {
        cout << (i % 2 ? i / 2 : i / 2 - 1) << endl;
    }

    return 0;
}
