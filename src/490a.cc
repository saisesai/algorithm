#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    size_t n;
    vector<int> a;

    cin >> n;
    a.resize(n);
    for (int &a_i: a) cin >> a_i;

    size_t c1 = count(a.begin(), a.end(), 1);
    size_t c2 = count(a.begin(), a.end(), 2);
    size_t c3 = count(a.begin(), a.end(), 3);
    size_t c_min = min({c1, c2, c3});

    cout << c_min << endl;

    auto it1 = a.begin();
    auto it2 = a.begin();
    auto it3 = a.begin();
    for (int i = 0; i < c_min; i++) {
        it1 = std::find(it1, a.end(), 1) + 1;
        it2 = std::find(it2, a.end(), 2) + 1;
        it3 = std::find(it3, a.end(), 3) + 1;
        cout << distance(a.begin(), it1) << " "
             << distance(a.begin(), it2) << " "
             << distance(a.begin(), it3) << endl;
    }

    return 0;
}