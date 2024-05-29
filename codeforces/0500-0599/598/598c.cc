// Author Sai (saisesai@qq.com)

#include <bits/stdc++.h>

using namespace std;

#define f32  float
#define f64  double
#define f128 long double
#define i32  int32_t
#define i64  int64_t
#define u32  uint32_t
#define u64  uint64_t

#define rw   reference_wrapper
#define vec  vector
#define hmap unordered_map

#define PI 3.14159265358979323846

#define fast_io() do{ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);}while(0)

struct Pos {
    u64 i;
    f128 x;
    f128 y;
    f128 a;

    bool operator<(const Pos &that) const {
        return this->a < that.a;
    }

    friend ostream &operator<<(ostream &out, const Pos &pos) {
        return out << "Vec("
                   << pos.i << ", "
                   << pos.x << ", "
                   << pos.y << ", "
                   << pos.a / PI << "pi)";
    }
};

int main() {
    fast_io();

    int n;
    cin >> n;
    vec<Pos> a(n);
    for (int i = 1; i <= n; i++) {
        Pos pos{};
        pos.i = i;
        cin >> pos.x >> pos.y;
        pos.a = atan2(pos.y, pos.x);
        if (pos.a < 0) {
            pos.a = 2 * PI + pos.a;
        }
        a[i - 1] = pos;
//        cout << pos << endl;
    }
    sort(a.begin(), a.end());
    vec<f128> d(n);
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            d[i] = 2.0f * PI - a[i].a + a[0].a;
        } else {
            d[i] = a[i + 1].a - a[i].a;
        }
    }
    i64 idx = distance(d.begin(), min_element(d.begin(), d.end()));

    if (idx == n - 1) {
        cout << a[idx].i << " " << a[0].i << endl;
    } else {
        cout << a[idx].i << " " << a[idx + 1].i << endl;
    }

    return 0;
}