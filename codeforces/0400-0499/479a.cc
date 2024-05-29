#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c;
vector<int> v(6, 0);

int main() {
    cin >> a >> b >> c;

    v[0] = a + b + c;
    v[1] = a * b * c;
    v[2] = a * b + c;
    v[3] = a + b * c;
    v[4] = (a + b) * c;
    v[5] = a * (b + c);

    cout << *max_element(v.begin(), v.end()) << endl;

    return 0;
}