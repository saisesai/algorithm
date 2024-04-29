#include <iostream>

using namespace std;

int get_nth_cost(int n) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res += i;
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    int level(0), cost(0);
    do {
        level++;
        cost += get_nth_cost(level);
    } while (cost <= n);

    cout << --level << endl;

    return 0;
}