#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Node {
    int count;
    int value;

    bool operator<(const Node &node) const {
        return this->count < node.count;
    }
};

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    int li(0), ri(0);
    vector<Node> record(n, {0, 0});

    while (li < n) {
        if (li > 0) {
            if (record[li - 1].count > 0)
                record[li].count = record[li - 1].count - 1;
            if (record[li - 1].value >= a[li - 1])
                record[li].value = record[li - 1].value - a[li - 1];
        }

        while (ri < n) {
            if (ri < li) ri = li;
            if (record[li].value + a[ri] > t) break;
            record[li].count += 1;
            record[li].value += a[ri];
            ri += 1;
        }

        li += 1;
    }

    cout << max_element(record.begin(), record.end())->count << endl;

    return 0;
}