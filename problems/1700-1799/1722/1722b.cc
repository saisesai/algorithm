#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s1;
        string s2;
        cin >> n >> s1 >> s2;

        string ans = "YES";
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                if ((s1[i] == 'G' && s2[i] == 'B') || (s1[i] == 'B' && s2[i] == 'G')) {
                    continue;
                }
                ans = "NO";
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}