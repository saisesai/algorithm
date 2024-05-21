#include <set>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int n;
bool ans = true;
string str;
set<char> ch_set;

int main() {
    cin >> n;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), [](char ch) { return tolower(ch); });
    for (const char &ch: str) ch_set.insert(ch);
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (ch_set.find(ch) == ch_set.end()) {
            ans = false;
        }
    }
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}