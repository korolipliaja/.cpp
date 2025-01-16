#include <iostream>
#include <cmath> // Для sqrt() и round()
using namespace std;

int main() {
    while (true) {
        double number; // Вводимое число
        cout << "Введите число: ";
        cin >> number;

        if (number <= 1) {
            cout << "Число должно быть больше 1. Попробуйте снова.\n";
            continue;
        }

        double sqrtResult = sqrt(number);           // Вычисление корня
        int roundedResult = round(sqrtResult);      // Округление корня
        cout << "Квадратный корень из " << number << " округлён до " << roundedResult << endl;

        bool hasDivisor = false; // Флаг для проверки делимости

        // Проверяем делимость, исключая 1 и само число
        for (int i = 2; i < roundedResult; i++) {
            if (static_cast<int>(number) % i == 0) { // Проверка делимости
                cout << number << " делится на " << i << " без остатка.\n";
                hasDivisor = true; // Найдён делитель без остатка
                break;
            }
        }

        if (!hasDivisor) {
            cout << "Все делители дают остаток (исключая 1 и само число). Завершаем программу.\n";
            break;
        } else {
            cout << "Введите новое число, так как деление без остатка было найдено.\n";
        }
    }

    return 0;
}
