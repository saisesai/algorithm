#include <set>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

string line;
set<string> ch_set;
vector<string> input;

vector<string> str_split(const string &str, const string &delim) {
    size_t start = 0;
    vector<string> result;
    for (size_t found = str.find(delim); found != string::npos; found = str.find(delim, start)) {
        result.emplace_back(str.begin() + start, str.begin() + found);
        start = found + delim.length();
    }
    if (start != str.length()) {
        result.emplace_back(str.begin() + start, str.end());
    }
    return result;
}

int main() {
    getline(cin, line);

    line = string(line.begin() + 1, line.end() - 1);

    input = str_split(line, ", ");

    for (const string &ch: input) {
        ch_set.insert(ch);
    }

    cout << ch_set.size() << endl;

    return 0;
}