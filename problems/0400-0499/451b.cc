#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    if (is_sorted(a.begin(), a.end())) {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }

    int begin(-1), end(-1);
    vector<int> mono(a.size(), 0);
    for (int i = 1; i < n; i++) {
        mono[i] = a[i - 1] - a[i];
        if (begin == -1 && mono[i] > 0) begin = i - 1;
        if (begin != -1 && i > begin && mono[i] < 0) {
            end = i - 1;
            break;
        }
    }
    if (mono[n - 1] > 0) end = n - 1;

    if (begin == -1 || end == -1) {
        cout << "no" << endl;
        return 0;
    }

    reverse(a.begin() + begin, a.begin() + end + 1);

    if (is_sorted(a.begin(), a.end())) {
        cout << "yes" << endl;
        cout << begin + 1 << " " << end + 1 << endl;
    } else cout << "no" << endl;

    return 0;
}
