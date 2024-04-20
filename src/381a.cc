#include <deque>
#include <iostream>

using namespace std;

int main() {
    int n, a(0), b(0);
    deque<int> dq;

    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq.emplace_back(x);
    }

    for(int i = 0; dq.size() != 0; i++) {
        int &x = i % 2 == 0 ? a : b;
        if(dq.front() > dq.back()) {
            x += dq.front();
            dq.pop_front();
        } else {
            x += dq.back();
            dq.pop_back();
        }
    }

    cout << a << " " << b << endl;

    return 0;
}
