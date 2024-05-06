#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int day = 0;
    do {
        day++;
        n--;
        if (day % m == 0) n++;
    } while (n > 0);

    cout << day << endl;

    return 0;
}