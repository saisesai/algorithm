#include <bits/stdc++.h>
//#include <helpers.hpp>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        vector<char> record;
        record.emplace_back(s[0]);
        for (int i = 1; i < s.length(); i++) {
            if (*record.rbegin() != s[i]) record.emplace_back(s[i]);
        }

        size_t ans = record.size();
        if(ans != 1){
            if (*record.rbegin() == '1') {
                ans--;
            } else {
                for (int i = 1; i < record.size(); i++) {
                    if (record[i - 1] == '0' && record[i] == '1') {
                        ans--;
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}