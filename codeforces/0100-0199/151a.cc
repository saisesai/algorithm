#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    vector<int> ingredient(3);
    ingredient[0] = c * d;
    ingredient[1] = p / np;
    ingredient[2] = k * l / nl;

    int total = *min_element(ingredient.begin(), ingredient.end());

    cout << total / n << endl;

    return 0;
}
