#include "math_operations.h"

// Реализация функции сложения
int add(int a, int b) {
    return a + b;
}

// Реализация функции вычитания
int subtract(int a, int b) {
    return a - b;
}

// Реализация функции умножения
int multiply(int a, int b) {
    return a * b;
}

// Реализация функции деления
int divide(int a, int b) {
    // Проверяем, чтобы делитель не был равен 0
    if (b != 0) {
        return a / b;
    } else {
        return 0; // Возвращаем 0 при делении на 0
    }
}
