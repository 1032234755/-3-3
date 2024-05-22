#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>

using namespace std; // Использование пространства имен std

// Функция для вычисления элемента ряда
double seriesTerm(int k) {
    return 6 * pow(-1, k - 1) / ((2 * k - 1) * (2 * k - 1) * (2 * k - 1));
}

int main() {
    setlocale(LC_ALL, "ru"); // Установка локали на русский язык

    double sum = 0.0;
    double tolerance = 1e-6; // Точность до 10^-6
    int k = 1;
    double term;

    cout << setprecision(10);
    do {
        term = seriesTerm(k); // Вычисление текущего элемента ряда
        sum += term; // Добавление элемента к сумме
        k++;
    } while (abs(term) > tolerance); // Проверка на точность

    cout << "Сумма числового ряда: " << sum << endl;

    return 0;
}
