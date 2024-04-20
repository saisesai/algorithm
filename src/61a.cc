#include <string>
#include <iostream>

using namespace std;

int main() {
    string sa, sb, ans;
    cin >> sa >> sb;
    ans.resize(sa.length(), '0');

    for(int i = 0; i < sa.length(); i++) {
        if(sa[i] != sb[i]) ans[i] = '1';
    }

    cout << ans << endl;

    return 0;
}
