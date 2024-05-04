#include <set>
#include <iostream>

using namespace std;

int n, p, q, l;
set<int> level;
bool ans = true;

int main() {
    cin >> n;

    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> l;
        level.insert(l);
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> l;
        level.insert(l);
    }

    for (int i = 1; i <= n; i++) {
        if (level.find(i) == level.end()) {
            ans = false;
            break;
        }
    }

    if (ans) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;

    return 0;
}