#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int n, ans(0);
vector<int> s;
int sa[5] = {0};

bool check() {
    return sa[1] == 0 && sa[2] == 0 && sa[3] == 0 && sa[4] == 0;
}

int main() {
    cin >> n;
    s.resize(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    for (int i = 1; i <= 4; i++) {
        sa[i] = (int) count(s.begin(), s.end(), i);
    }

    ans += sa[4];

    ans += sa[3];
    sa[1] -= sa[3];

    ans += sa[2] / 2;
    if (sa[2] % 2) {
        ans += 1;
        sa[1] -= 2;
    }

    if (sa[1] > 0) {
        ans += sa[1] / 4;
        if (sa[1] % 4) ans += 1;
    }

    cout << ans << endl;

    return 0;
}
