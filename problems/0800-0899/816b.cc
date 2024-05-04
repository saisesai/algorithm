#include <vector>
#include <iostream>
//#include <helpers.hpp>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> ht(200001, 0);
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        ht[l]++;
        ht[r + 1]--;
    }
//    show_vec(vector<int>(ht.begin() + 90, ht.begin() + 100));

    vector<int> record(200001, 0);
    for (int i = 1; i < 200001; i++) {
        ht[i] += ht[i - 1];
        record[i] = ht[i] >= k ? record[i - 1] + 1 : record[i - 1];
    }
//    show_vec(vector<int>(ht.begin() + 90, ht.begin() + 100));

    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;

        cout << record[b] - record[a - 1] << endl;
    }

    return 0;
}