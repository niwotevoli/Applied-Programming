#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Функция для конвертации в метры (базовая единица)
double toMeters(double value, const string& unit) {
    if (unit == "км") return value * 1000;
    if (unit == "м") return value;
    if (unit == "см") return value * 0.01;
    if (unit == "мм") return value * 0.001;
    if (unit == "mi") return value * 1609.34;
    if (unit == "yd") return value * 0.9144;
    return value;
}
// Функция для конвертации из метров в нужную единицу
double fromMeters(double value, const string& unit) {
    if (unit == "км") return value / 1000;
    if (unit == "м") return value;
    if (unit == "см") return value / 0.01;
    if (unit == "мм") return value / 0.001;
    if (unit == "mi") return value / 1609.34;
    if (unit == "yd") return value / 0.9144;
    return value;
}

int main() {
    string sourceUnit, targetUnit;
    double value;
    
    cout << "Данная программа - конвертер единиц измерения расстояния." << endl;
    cout << "Доступные единицы измерения:" << endl;
    cout << "км - Километры" << endl;
    cout << "м  - Метры" << endl;
    cout << "см - Сантиметры" << endl;
    cout << "мм - Миллиметры" << endl;
    cout << "mi - Мили" << endl;
    cout << "yd - Ярды" << endl;
    
    cout << "Выберите исходную единицу измерения (км/м/см/мм/mi/yd): ";
    cin >> sourceUnit;
    
    // Проверка корректности исходной единицы
    if (sourceUnit != "км" && sourceUnit != "м" && sourceUnit != "см" && 
        sourceUnit != "мм" && sourceUnit != "mi" && sourceUnit != "yd") {
        cout << "Ошибка: неизвестная единица измерения!" << endl;
        return 1;
    }
    
    cout << "Выберите целевую единицу измерения (км/м/см/мм/mi/yd): ";
    cin >> targetUnit;
    
    // Проверка корректности целевой единицы
    if (targetUnit != "км" && targetUnit != "м" && targetUnit != "см" && 
        targetUnit != "мм" && targetUnit != "mi" && targetUnit != "yd") {
        cout << "Ошибка: неизвестная единица измерения!" << endl;
        return 1;
    }
    
    cout << "Введите значение для конвертации: ";
    cin >> value;
    
    // Проверка на отрицательное значение
    if (value < 0) {
        cout << "Ошибка: значение не может быть отрицательным!" << endl;
        return 1;
    }
    
    // Конвертация
    double valueInMeters = toMeters(value, sourceUnit);
    double result = fromMeters(valueInMeters, targetUnit);

    // Вывод результата
    cout << "\nРезультат конвертации:" << endl;
    cout << value << " " << sourceUnit << " = " << result << " " << targetUnit << endl;
    
    return 0;
}
