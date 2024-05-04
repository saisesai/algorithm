#include <vector>
#include <iostream>

using namespace std;

int main() {
    int t;
    vector<int> a;

    for (int x = 1; a.size() != 1000; x++) {
        if (x % 3 == 0 || x % 10 == 3) continue;
        a.push_back(x);
    }

    cin >> t;
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        cout << a[x - 1] << endl;
    }

    return 0;
}