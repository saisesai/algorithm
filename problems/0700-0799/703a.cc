#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int nm(0), nc(0);
    for (int i = 0; i < n; i++) {
        int m, c;
        cin >> m >> c;
        if (m > c) nm++;
        if (m < c) nc++;
    }

    if (nm > nc) cout << "Mishka" << endl;
    else if (nm < nc) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;

    return 0;
}