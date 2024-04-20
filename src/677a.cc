#include <vector>
#include <iostream>

using namespace std;

int n, h, ans = 0;
vector<int> a;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> h;
    a.resize(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (const int &ai: a) {
        if (ai > h) {
            ans += 2;
        } else {
            ans += 1;
        }
    }

    cout << ans << endl;

    return 0;
}