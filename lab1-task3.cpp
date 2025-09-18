#include <iostream>
using namespace std;

int main() {
    cout << "Данная программа определяет - является ли год високосным." << endl;
    int year;
    cout << "Введите год: ";
    cin >> year;
    
    // Комбинированная проверка всех условий по правилам
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " год является високосным" << endl;
    } else {
        cout << year << " год НЕ является високосным" << endl;
    }
    
    return 0;
}