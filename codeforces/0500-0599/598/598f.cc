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

struct Point {
    f64 x;
    f64 y;

    static Point get() {
        Point res{};
        cin >> res.x >> res.y;
        return res;
    }

    Point operator+(const Point &that) const {
        return Point{x + that.x, y + that.y};
    }

    Point operator-(const Point &that) const {
        return Point{x - that.x, y - that.y};
    }

    bool operator<(const Point &that) const {
        if (x == that.x) {
            return y < that.y;
        }
        return x == that.x;
    }

    bool operator==(const Point &that) const {
        return x == that.x && y == that.y;
    }

    friend ostream &operator<<(ostream &out, const Point &point) {
        return out << "Point(" << point.x << "," << point.y << ")";
    }
};

f64 len(const Point &a, const Point b) {
    f64 x = b.x - a.x;
    f64 y = b.y - a.y;
    return sqrt(x * x + y * y);
}

f64 dot(const Point &a, const Point b) {
    return a.x * b.x + a.y * b.y;
}

f64 cross(const Point &a, const Point b) {
    return a.x * b.y - a.y * b.x;
}

#define eps 1e-9

int sgn(f64 x) {
    if (x > +eps) {
        return +1;
    }
    if (x < -eps) {
        return -1;
    }
    return 0;
}

// 2 = overlap
// 1 = intersect
// 0 = parallel
int rel(Point p1, Point p2, Point q1, Point q2) {
    int sgn1 = sgn(cross(p2 - p1, q1 - p1));
    int sgn2 = sgn(cross(p2 - p1, q2 - p1));
    if (sgn1 == 0 && sgn2 == 0) {
        return 2;
    }
    if (sgn1 == sgn2) {
        return -1;
    }
    return 1;
}

int main() {
    fast_io();

    int n, m;
    cin >> n >> m;
    vec<Point> vertices(n);
    for (int i = 0; i < n; i++) {
        vertices[i] = Point::get();
    }
    vec<pair<Point, Point>> edges(n);
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            edges[i] = make_pair(vertices[0], vertices[i]);
        } else {
            edges[i] = make_pair(vertices[i], vertices[i + 1]);
        }
    }

    while (m--) {
        Point p1 = Point::get();
        Point p2 = Point::get();
        vec<Point> ips;
        for (auto &edge: edges) {

        }
//        cout << endl;
    }

    return 0;
}