#include <vector>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &a_i: a) cin >> a_i;

        int im0(0), im1(0);
        for (int i = 0; i < a.size(); i++) {
            if (i % 2 == a[i] % 2) continue;
            if (i % 2 == 0) im0++;
            else im1++;
        }

        cout << (im0 != im1 ? -1 : im0) << endl;
    }

    return 0;
}