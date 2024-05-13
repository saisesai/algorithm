#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct Time {
    int Hour;
    int Minute;

    bool operator<(const Time &that) const {
        if (this->Hour < that.Hour) {
            return true;
        } else if (this->Hour == that.Hour) {
            return this->Minute < that.Minute;
        } else {
            return false;
        }
    }
};

vector<Time> table = {
        {0,  0},
        {1,  10},
        {2,  20},
        {3,  30},
        {4,  40},
        {5,  50},
        {10, 01},
        {11, 11},
        {12, 21},
        {13, 31},
        {14, 41},
        {15, 51},
        {20, 02},
        {21, 12},
        {22, 22},
        {23, 32},
};

int main() {
    Time input{};
    scanf("%d:%d", &input.Hour, &input.Minute);

    auto it = lower_bound(table.begin(), table.end(), input);
    if (it == table.end()) it = table.begin();

    int res;
    if (it->Hour == 0 && it->Minute == 0) {
        if (input.Hour == 0 && input.Minute == 0)res = 0;
        else res = 60 - input.Minute;
    } else if (it->Hour == input.Hour) {
        res = it->Minute - input.Minute;
    } else {
        res = (it->Hour - input.Hour - 1) * 60 + it->Minute + 60 - input.Minute;
    }

    printf("%d\n", res);

    return 0;
}