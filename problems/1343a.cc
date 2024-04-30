#include <vector>
#include <iostream>

using namespace std;

int int_pow(int root, int times) {
    int res = 1;
    for (int i = 0; i < times; i++) res *= root;
    return res;
}

int main() {
    int t;
    cin >> t;

    vector<int> table;
    table.reserve(100);
    for (int i = 0; i < 30; i++) {
        table.emplace_back(int_pow(2, i));
        if (i > 0) table[i] += table[i - 1];
    }

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << 1 << endl;
            continue;
        }

        int k = 0;
        for (int i = 1; i < table.size(); i++) {
            if (n % table[i] == 0) {
                k = n / table[i];
                break;
            }
        }

        cout << k << endl;
    }

    return 0;
}