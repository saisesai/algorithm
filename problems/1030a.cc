#include <vector>
#include <iostream>

using namespace std;

int n;
vector<int> a;
const char *ans = "EASY";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    a.resize(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (const int &i: a) {
        if (i != 0) {
            ans = "HARD";
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
