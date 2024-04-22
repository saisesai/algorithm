# codeforces

## integer range

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

## Monotonic Stack

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