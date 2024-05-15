#include <bits/stdc++.h>

using namespace std;

template<typename T>
inline void show_vec(const std::vector<T> &vec) {
    for (const auto &elem: vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

template<typename T>
inline void show_vec_2d(const std::vector<T> &vec2d) {
    for (const auto &row: vec2d) {
        for (const auto &elem: row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

template<typename TK, typename TV>
inline void show_map_kv(const map<TK, TV> &m) {
    for (const auto &p: m) {
        cout << p.first << ": " << p.second << endl;
    }
}

template<typename TK, typename TV>
inline void show_map_stl(const map<TK, TV> &m) {
    for (const auto &p: m) {
        cout << setw(3) << p.first << ": ";
        for (const auto &item: p.second) {
            cout << setw(3) << item << " ";
        }
        cout << endl;
    }
}