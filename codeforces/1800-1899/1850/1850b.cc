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

struct Response {
    int length;
    int quality;

    bool operator<(const Response &another) const {
        return this->quality < another.quality;
    }
};

int main() {
    fast_io();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vec<Response> a(n);
        hmap<int, int> rec;
        for (int i = 0; i < n; i++) {
            cin >> a[i].length >> a[i].quality;
            rec[a[i].quality] = i + 1;
        }

        std::sort(a.begin(), a.end());
        std::reverse(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            if (a[i].length <= 10) {
                cout << rec[a[i].quality] << endl;
                break;
            }
        }
    }

    return 0;
}
