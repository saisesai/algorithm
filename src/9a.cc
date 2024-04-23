#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> a(2);
    cin >> a[0] >> a[1];

    std::sort(a.begin(), a.end());

    int numerator = 6 - a[1] + 1;
    int denominator = 6;
    for (int i = 1; i < 6; i++) {
        if (numerator % i == 0 && denominator % i == 0) {
            numerator /= i;
            denominator /= i;
        }
    }

    cout << numerator << "/" << denominator << endl;
}