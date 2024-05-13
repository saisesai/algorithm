#include <string>
#include <vector>
#include <iostream>

using namespace std;

using Row = vector<int>;
using Grid = vector<vector<int>>;

bool check(Grid &grid) {
    for (int i = 1; i < grid.size(); i++) {
        for (int j = 1; j < grid[0].size(); j++) {
            if (grid[i][j] != 0.0) return false;
        }
    }
    return true;
}

void update_row(Grid &grid, vector<string> &steps) {
    for (int i = 1; i < grid.size(); i++) {
        int row_min = INT_MAX;
        for (int j = 1; j < grid[0].size(); j++) {
            row_min = min(row_min, grid[i][j]);
        }
        for (int j = 1; j < grid[0].size(); j++) {
            grid[i][j] -= row_min;
        }
        for (int j = 0; j < row_min; j++) steps.emplace_back("row " + to_string(i));
    }
}

void update_col(Grid &grid, vector<string> &steps) {
    for (int i = 1; i < grid[0].size(); i++) {
        int col_min = INT_MAX;
        for (int j = 1; j < grid.size(); j++) {
            col_min = min(col_min, grid[j][i]);
        }
        for (int j = 1; j < grid.size(); j++) {
            grid[j][i] -= col_min;
        }
        for (int j = 0; j < col_min; j++) steps.emplace_back("col " + to_string(i));
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    Grid grid(n + 1, Row(m + 1));
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            cin >> grid[i][j];
        }
    }

    vector<string> steps;
    if (n < m) { // row begin
        update_row(grid, steps);
        update_col(grid, steps);
    } else { // col begin
        update_col(grid, steps);
        update_row(grid, steps);
    }

    if (check(grid)) {
        cout << steps.size() << endl;
        for (auto &step: steps) {
            cout << step << endl;
        }
    } else {
        cout << -1 << endl;
    }

    return 0;
}