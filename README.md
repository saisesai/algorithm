# codeforces

## Integer Range

- i8 : -128 to 127
- u8 : 0 to 255
- i16 : -32768 to 32767
- u16 : 0 to 65535
- i32 : -2147483648 to 2147483647
- u32 : 0 to 4294967295
- i64 : -9223372036854775808 to 9223372036854775807
- u64 : 0 to 18446744073709551615
- f32 : 1.17549e-038 to 3.40282e+038
- f64 : 2.22507e-308 to 1.79769e+308
- f128 : 3.3621e-4932 to 1.18973e+4932

## Babylonian sqrt

```c++
template<typename T>
T babylonian_sqrt(T n) {
    T x = n;
    T y = 1;
    while (x > y) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}
```

## Integer Sum

```c++
template<typename T>
T vec_sum(const vector<T>& vec) {
    T res = 0;
    for(const T& e: vec) res += e;
    return res;
}
```

## Monotonic Stack

It is used to maintain elements in a stack in either non-increasing or non-decreasing order. 
Monotonic stack helps in solving problems where we need to find the **next greater element**, **next smaller element**, or maintain a certain order of elements.
The stack is updated in a way that preserves the desired monotonic property.

```c++
for (int pick = 0; pick < n; pick++) {
    while (!mono_stack.empty() && a[pick] < mono_stack.top().second) {
        res[mono_stack.top().first] = pick - mono_stack.top().first;
        mono_stack.pop();
    }
    mono_stack.emplace(pick, a[pick]);
}
```

eg: 547b

## Difference Array / Prefix Sum Array

It reduces time complexity by updating only at the left and right endpoints of intervals.
After updating, the final result is obtained by accumulating the values in the array.
This optimization is effective for interval update problems with **large intervals**.
It helps improve efficiency by avoiding unnecessary loop operations.

```c++
vector<int> ht(200001, 0);
for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    for (int j = l; j <= r; j++) {
        ht[j]++;
    }
}
```

Above can be optimized to below:

```c++
vector<int> ht(200001, 0);
for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    ht[l]++;
    ht[r + 1]--;
}

for (int i = 1; i < 200001; i++) {
    ht[i] += ht[i - 1];
}
```

eg: 816b