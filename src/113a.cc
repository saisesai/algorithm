#include <string>
#include <iostream>

using namespace std;

string p, ans;

int main() {
    cin >> p;
    if (p.find_first_of("HQ9") != string::npos) ans = "YES";
    else ans = "NO";
    cout << ans << endl;
    return 0;
}