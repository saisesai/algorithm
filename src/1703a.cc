#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        transform(str.begin(), str.end(), str.begin(), toupper);
        if(str == "YES") cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
