#include <stack>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

string s, t;
stack<char> st;
stringstream ss;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s >> t;

    for (const char &ch: s) {
        st.push(ch);
    }

    while (!st.empty()) {
        ss << st.top();
        st.pop();
    }

    if (ss.str() == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}