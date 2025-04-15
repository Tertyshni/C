#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double number;


    cout << "Введите дробное число: ";
    cin >> number;

    cout << fixed << setprecision(2);
    cout << "Округленное число: " << number << endl;

    return 0;
}
