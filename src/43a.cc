#include <map>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int k = n;
    map<string, int> records;
    while (k--) {
        string team;
        cin >> team;

        if (records.find(team) == records.end()) {
            records[team] = 1;
            continue;
        }

        records[team]++;
    }

    string winner = max_element(records.begin(), records.end(), [](auto a, auto b) -> bool {
        return a.second < b.second;
    })->first;

    cout << winner << endl;

    return 0;
}