#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n, ei, oi, en(0), on(0);
    vector<int> a;

    cin >> n;
    a.resize(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (a[i] % 2) {
            oi = i + 1;
            on += 1;
        } else {
            ei = i + 1;
            en += 1;
        }
    }

    cout << (en < on ? ei : oi) << endl;

    return 0;
}