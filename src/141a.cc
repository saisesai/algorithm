#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str1, str2, str3;

    cin >> str1 >> str2 >> str3;

    string str12 = str1 + str2;
    sort(str12.begin(), str12.end());
    sort(str3.begin(), str3.end());

    cout << (str12 == str3 ? "YES" : "NO") << endl;

    return 0;
}