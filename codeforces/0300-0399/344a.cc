#include <vector>
#include <iostream>

using namespace std;

int n, ans = 1;
vector<int> a;

int main() {
    ios::sync_with_stdio(false);
    cin.tie();

    cin >> n;
    a.resize(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];

    int tail_last = a[0] % 10;
    for (int i = 1; i < n; i++) {
        int head = a[i] / 10;
        int tail = a[i] % 10;
        if (tail_last == head) ans++;
        tail_last = tail;
    }

    cout << ans << endl;

    return 0;
}