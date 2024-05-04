#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];

        sort(v.begin(), v.end());

        cout << v[1] << endl;
    }

    return 0;
}