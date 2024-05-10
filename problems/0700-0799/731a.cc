#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    char ptr = 'a';
    for (const char &ch: s) {
        int nf, nb;
        if (ch > ptr) {
            nf = ch - ptr;
            nb = 26 - (ch - 'a') + (ptr - 'a');
        } else {
            nf = 26 - (ptr - 'a') + (ch - 'a');
            nb = ptr - ch;
        }
        ans += min(nf, nb);
        ptr = ch;
    }

    cout << ans << endl;

    return 0;
}