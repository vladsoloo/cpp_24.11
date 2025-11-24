#include <iostream>
#include <random>
#include <iomanip>

int main() {
    const int SIZE = 5;
    int matrix[SIZE][SIZE];

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            matrix[i][j] = dis(gen);
        }
    }

    std::cout << "Матрица 5x5:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << std::setw(4) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int diag_sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        diag_sum += matrix[i][i];
    }

    std::cout << "Сумма элементов главной диагонали: " << diag_sum << std::endl;
    return 0;
}