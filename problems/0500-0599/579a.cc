#include <bitset>
#include <iostream>

using namespace std;

int main() {
    uint32_t x;

    cin >> x;

    bitset<32> bs(x);

    cout << bs.count() << endl;

    return 0;
}
