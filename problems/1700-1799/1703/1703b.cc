#include <vector>
#include <string>
#include <numeric>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string input;
        cin >> input;

        vector<int> record(26, 0);
        for (const char &e: input) {
            int i = e - 'A';
            if (record[i] == 0) record[i] += 2;
            else record[i] += 1;
        }

        cout << accumulate(record.begin(), record.end(), 0) << endl;
    }

    return 0;
}