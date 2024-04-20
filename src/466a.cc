#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, a, b;
    vector<int> plan(3);

    cin >> n >> m >> a >> b;

    plan[0] = n * a;
    plan[1] = (n / m) * b + (n % m) * a;
    plan[2] = (n / m + 1) * b;
    sort(plan.begin(), plan.end());

    cout << plan[0] << endl;

    return 0;
}
