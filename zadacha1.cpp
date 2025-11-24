#include <iostream>
#include <random>

int main() {
    const int N = 15;
    int arr[N];

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(-50, 50);

    for (int i = 0; i < N; ++i) {
        arr[i] = dis(gen);
    }

    int min_val = arr[0], max_val = arr[0], neg_count = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
        if (arr[i] < 0) neg_count++;
    }

    std::cout << "Массив: ";
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n Мин элемент: " << min_val
              << "\n Макc элемент: " << max_val
              << "\n Кол-во отрицательных элементов: " << neg_count
              << std::endl;

    return 0;
}