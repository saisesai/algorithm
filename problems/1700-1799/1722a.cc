#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    string name = "Timur";
    sort(name.begin(), name.end());

    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        sort(str.begin(), str.end());
        if (str != name) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}