#include <deque>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  string input;
  stringstream ss;
  deque<char> input_dq;

  cin >> input;

  for (char &ch : input)
    input_dq.emplace_back(ch);

  while (!input_dq.empty()) {
    if (input_dq.front() == '.') {
      ss << 0;
      input_dq.pop_front();
    } else {
      input_dq.pop_front();
      if (input_dq.front() == '.') {
        ss << 1;
      } else {
        ss << 2;
      }
      input_dq.pop_front();
    }
  }

  cout << ss.str() << endl;

  return 0;
}
