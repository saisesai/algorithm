#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Computer {
    int Price;
    int Quality;
};

int main() {
    int n;
    cin >> n;
    vector<Computer> computers(n);
    for (Computer &computer: computers) cin >> computer.Price >> computer.Quality;

    sort(computers.begin(), computers.end(), [](const Computer &a, const Computer &b) -> bool {
        return a.Price < b.Price;
    });

    bool find = false;
    for (int i = 0; i < n - 1; i++) {
        if (computers[i].Price < computers[i + 1].Price && computers[i].Quality > computers[i + 1].Quality) {
            find = true;
            break;
        }
    }

    cout << (find ? "Happy Alex" : "Poor Alex") << endl;

    return 0;
}