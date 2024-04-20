#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    uint64_t a, b, c;
    vector<uint64_t> input(4);

    cin >> input[0] >> input[1] >> input[2] >> input[3];

    sort(input.begin(), input.end());
    a = input[0] + input[1] - input[3];
    b = input[0] - a;
    c = input[1] - a;

    cout << a << " " << b << " " << c << endl;

    return 0;
}