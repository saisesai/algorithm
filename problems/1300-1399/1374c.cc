#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        stack<char> st;
        for (char &ch: str) {
            if (ch == '(') st.push('(');
            if (ch == ')' && !st.empty()) st.pop();
        }

        cout << st.size() << endl;
    }

    return 0;
}