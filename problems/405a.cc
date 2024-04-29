#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int n;
vector<int> a;

int main() {
    cin >> n;
    a.resize(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}