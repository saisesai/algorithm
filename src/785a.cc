#include <string>
#include <iostream>

using namespace std;

int n, ans(0);

int main() {
    cin >> n;

    string str;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == "Tetrahedron") ans += 4;
        else if (str == "Cube") ans += 6;
        else if (str == "Octahedron") ans += 8;
        else if (str == "Dodecahedron") ans += 12;
        else if (str == "Icosahedron") ans += 20;
    }

    cout << ans << endl;

    return 0;
}
