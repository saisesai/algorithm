#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        if (count(s.begin(), s.end(), s[0]) == s.length() || s.length() == 1) {
            cout << "NO" << endl;
        } else {
            string ss = s;
            do {
                random_shuffle(ss.begin(), ss.end());
            } while (s == ss);
            cout << "YES" << endl;
            cout << ss << endl;
        }
    }

    return 0;
}