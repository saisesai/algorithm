#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<char> photo(m * n);
    for (char &e: photo) cin >> e;

    bool is_colored = find_if(photo.begin(), photo.end(), [](const char &ch) -> bool {
        bool res;
        switch (ch) {
            case 'C':
            case 'M':
            case 'Y':
                res = true;
                break;
            default:
                res = false;
        }
        return res;
    }) != photo.end();

    cout << (is_colored ? "#Color" : "#Black&White") << endl;

    return 0;
}
