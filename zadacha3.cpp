#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

int main() {
    std::vector<int> vec;
    const int COUNT = 10;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 20);

    for (int i = 0; i < COUNT; ++i) {
        vec.push_back(dis(gen));
    }

    std::cout << "Исходный вектор: ";
    for (int x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    vec.erase(
        std::remove_if(vec.begin(), vec.end(),
            [](int x) { return x % 3 == 0; }),
        vec.end()
    );

    std::cout << "После удаления элементов, делящихся на 3: ";
    for (int x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}