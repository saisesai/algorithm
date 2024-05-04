#include <map>
#include <string>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    map<string, int> registry;

    cin >> n;
    for (int i = 0; i < n; i++) {
        string username;
        cin >> username;
        if (registry.find(username) == registry.end()) {
            cout << "OK" << endl;
            registry[username] = 1;
        } else {
            cout << username + to_string(registry[username]) << endl;
            registry[username] += 1;
        }
    }

    return 0;
}