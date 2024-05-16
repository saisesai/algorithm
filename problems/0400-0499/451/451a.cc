#include <vector>
#include <iostream>

using namespace std;


int main() {
    int m, n, min_mn;

    cin >> m >> n;

    min_mn = m < n ? m : n;

    cout << (min_mn % 2 ? "Akshat" : "Malvika") << endl;

    return 0;
}
