#include <iostream>
#include <algorithm>

using namespace std;

#define M 200001
#define MOD 1000000007
#define ADD 1
#define SUB 2

int64_t a1[M], a2[M];
int64_t *up = a1, *down = a2;

static int state = ADD;

int64_t fac[M], rev[M];

int64_t fast_pow(int64_t a, int64_t n) {
    int64_t ans = 1;
    while (n) {
        if (n & 1) ans = ans * a % MOD;
        a = a * a % MOD;
        n >>= 1;
    }
    return ans;
}

// Cm^n
int64_t C(int64_t m, int64_t n) {
    return fac[m] * rev[n] % MOD * rev[m - n] % MOD;
}

int64_t update(int64_t a, int64_t b) {
    int64_t res = state == ADD ? a + b : a - b;
    state = state == ADD ? SUB : ADD;
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> up[i];

    int t = n / 2;
    fac[0] = 1;
    for (int i = 1; i <= t; i++) fac[i] = i * fac[i - 1] % MOD;
    rev[t] = fast_pow(fac[t], MOD - 2);
    for (int i = t; i > 0; i--) rev[i - 1] = rev[i] * i % MOD;

    if (n == 1) {
        cout << (up[0] >= 0 ? up[0] % MOD : MOD + up[0] % MOD) << endl;
        return 0;
    }

    if (n % 2) {
        n--;
        for (int i = 0; i < n; i++) {
            down[i] = update(up[i], up[i + 1]) % MOD;
        }
        swap(up, down);
    }

    int opt = n % 4 ? ADD : SUB;

//    while (n != 2) {
//        n -= 2;
//        for (int i = 0; i < n; i++) {
//            down[i] = (up[i] + up[i + 2]) % MOD;
//        }
//        swap(up, down);
//    }
    int64_t ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i += 2) ans1 += C(t - 1, i / 2) * up[i] % MOD;
    for (int i = 1; i < n; i += 2) ans2 += C(t - 1, i / 2) * up[i] % MOD;

    int64_t ans;
    if (opt == ADD) ans = (ans1 + ans2) % MOD;
    else ans = (ans1 - ans2) % MOD;

    cout << (ans + MOD) % MOD << endl;
    return 0;
}