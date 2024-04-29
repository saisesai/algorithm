#include <vector>
#include <iostream>

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
