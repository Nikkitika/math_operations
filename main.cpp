#include <iostream>
#include "math_operations.h" // Подключаем заголовочный файл с математическими операциями

int main() {
    int a = 5, b = 3;

    // Используем функции из math_operations
    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Subtraction: " << subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << multiply(a, b) << std::endl;
    std::cout << "Division: " << divide(a, b) << std::endl;

    return 0;
}
