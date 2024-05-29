// Author Sai (saisesai@qq.com)

#include <bits/stdc++.h>

using namespace std;

#define f32 float
#define f64 double
#define i32 int32_t
#define i64 int64_t
#define u32 uint32_t
#define u64 uint64_t

#define rw   reference_wrapper
#define vec  vector
#define hmap unordered_map

#define fast_io() do{ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);}while(0)

int main() {
    fast_io();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        deque<char> dq;
        for (int i = 0; i < n; i++) {
            char ch;
            cin >> ch;
            dq.emplace_back(ch);
        }

        while (!dq.empty() && dq.front() != dq.back()) {
            dq.pop_front();
            dq.pop_back();
        }

        cout << dq.size() << endl;
    }

    return 0;
}