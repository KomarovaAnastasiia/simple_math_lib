#include "math_lib.h"

// Функція для обчислення квадратного кореня методом Ньютона
double sqrt_newton(double number, double epsilon) {
    if (number < 0) {
        return -1; // Помилка, оскільки неможливо знайти корінь від від'ємного числа
    }

    double guess = number; // Початкове припущення
    double result = 0.0;

    // Метод Ньютона: поки різниця між поточним припущенням і результатом більше, ніж epsilon
    while ((guess - result) > epsilon) {
        result = guess;
        guess = (guess + number / guess) / 2; // Формула методу Ньютона
    }

    return guess;
}
